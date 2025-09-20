#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "SPNUM"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

int prime[maxn];

void seive() {
	fill(prime + 1, prime + maxn + 1, 1);
	prime[0] = prime[1] = 0;
	for (int i = 2; i * i <= maxn; i++) {
		if (prime[i]) for (int j = i * i; j <= maxn; j+=i) {
			prime[j] = 0;
		}
	}
}

void solve() {
	ll n; cin >> n;
	n = sqrt(n);
	int cnt = 0;
	for (int i = 2; i <= n; i++) {
		if (prime[i]) cnt++;
	}
	cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	seive();
	solve();
	return 0;
}




