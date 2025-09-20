#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "remove"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 2e3 + 1;
const int MOD = (int) 1e9 + 7;
const ll INF = 1e14;

int a[maxn], b[maxn];
int n;
int dp[maxn][maxn];

void inp() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) cin >> b[i];
}

void solve() {
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j<= 1000;j++) {
			dp[i][j] = 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		dp[i][i] = a[i] * b[i];
	}
	int ans = -1000, dau = 0, cuoi = 0;
	for (int l = 2; l <= n - 1; l++) {
		for (int i = 1; i <= n - l; i++) {
			for (int j = i + l; j <= n; j++) {
				dp[i][j] = max(dp[i][j], dp[i+1][j-1] + a[i] * b[j] + b[i] * a[j]);
				if (dp[i][j] > ans) {
					ans = dp[i][j];
					dau = i; cuoi = j;
				}
			}
		}
	}
	cout << dau - 1 << " " << n - cuoi << endl;
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	solve();
	return 0;
}




