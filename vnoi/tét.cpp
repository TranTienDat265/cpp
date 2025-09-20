#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

// Hàm d? tìm t?t c? các s? nguyên t? nh? hon ho?c b?ng max_num b?ng phuong pháp Sàng Eratosthenes
vector<int> sieve_of_eratosthenes(long long max_num) {
    vector<bool> is_prime(max_num + 1, true);
    vector<int> primes;
    
    is_prime[0] = is_prime[1] = false;
    
    for (long long p = 2; p * p <= max_num; ++p) {
        if (is_prime[p]) {
            for (long long i = p * p; i <= max_num; i += p) {
                is_prime[i] = false;
            }
        }
    }
    
    for (long long p = 2; p <= max_num; ++p) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }
    
    return primes;
}

// Hàm d? tìm s? viên g?ch th?a ít nh?t cho m?i giá tr? n
long long find_best_rectangle(long long n, const vector<int>& primes) {
    long long min_remainder = numeric_limits<long long>::max();
    
    for (size_t i = 0; i < primes.size() - 1; ++i) {
        long long p = primes[i];
        long long q = primes[i + 1];
        long long area = p * q;
        
        if (area <= n) {
            long long remainder = n - area;
            if (remainder < min_remainder) {
                min_remainder = remainder;
            }
        } else {
            break; // Vì các s? nguyên t? sau dó s? t?o ra di?n tích l?n hon
        }
    }
    
    return min_remainder;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m;
    cin >> m;
    
    vector<long long> queries(m);
    long long max_n = 0;
    
    for (int i = 0; i < m; ++i) {
        cin >> queries[i];
        if (queries[i] > max_n) {
            max_n = queries[i];
        }
    }
    
    // Tìm s? nguyên t? d?n sqrt(max_n) + m?t kho?ng du
    vector<int> primes = sieve_of_eratosthenes(static_cast<long long>(sqrt(max_n)) + 100);
    
    for (long long n : queries) {
        cout << find_best_rectangle(n, primes) << '\n';
    }
    
    return 0;
}

