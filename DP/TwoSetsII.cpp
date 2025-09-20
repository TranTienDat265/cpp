#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int MOD = 1000000007;
int n,s;

void inp() {
	cin >> n;
	s = n*(n+1)/ 4;
}

void solve() {
	if (n * (n+1)/ 2 % 2 != 0) {
		cout << 0;
		return;
	}
	vector<ll> dp(s + 1, 0);
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = s; j >= i; j--) {
			dp[j] = (dp[j] % MOD + dp[j-i] % MOD) % MOD;
		}
	}
	cout << dp[s] / 2;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	solve();
	return 0;
}


