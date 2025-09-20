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
const int MOD = (int) 12345678;

int dp[maxn],n,a[maxn], k;

void solve() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = k; j >= a[i]; j--) {
			if (dp[j-a[i]] > 0) dp[j] = (dp[j] + dp[j - a[i]]) % MOD;
		}
	}
	cout << dp[k] << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
//4 5
//4 2 1 3




