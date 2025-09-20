#include <iostream>
#include <vector>

using namespace std;

const int LIM = 1e6;

vector<int> prime;
vector<int> lpf;
void sieve(int n)
{
    prime.assign(1, 2);
    lpf.assign(n + 1, 2);

    for (int x = 3; x <= n; x += 2)
    {
        if (lpf[x] == 2) {
        	prime.push_back(lpf[x] = x);
		}
		//prime[i] = k
        for (int i = 0; i < prime.size() && prime[i] <= lpf[x] && prime[i] * x <= n; ++i) {

            lpf[prime[i] * x] = prime[i];
        }
    }

}

int main()
{
    int n=100;
	freopen(".OUT", "w", stdout);
    sieve(n);
    cout << "Number of primes up to " << n << " is " << prime.size();
    return 0;
}
