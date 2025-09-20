#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

void solve(ll n) {
	vector<ll> num;
	for (int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			num.push_back(i);
			n /= i;
		}
	}
	if (n > 1) num.push_back(n);
//	for (int x : num) cout << x << " ";
	if (num.size() <= 1) cout << 0;
}

vector<int> prime;
vector<int> lpf;
void seive(int n) {
	prime.assign(1,2);
	lpf.assign(n + 1, 2); // lowest_prime_factor uoc nguyen to nho nhat
	//lpf[x] uoc nguyen to nho nhat cua x
	for (int x = 3; x <= n; x += 2) {
		if (lpf[x] == 2) prime.push_back(lpf[x] = x);
		for (int i = 0; i < prime.size() && prime[i] <= lpf[x] && prime[i] * x <= n; i++) {
			lpf[prime[i] * x] = prime[i];
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	seive(1e6+66);
	vector<ll> multi(prime.size() - 1);
	for (int i = 0; i < multi.size(); i++) {
		multi[i] = 1LL * prime[i] * prime[i + 1];
	}
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		cout << n - multi[upper_bound(multi.begin(), multi.end(), n) - multi.begin() - 1] << endl;
	}
	return 0;
}




