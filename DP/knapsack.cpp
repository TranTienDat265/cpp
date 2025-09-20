#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
ll n, s, w[101], v[100005], dp[101][1000005];
void inp() {
	cin >> n >> s;
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}
	memset(dp, 0, sizeof(dp));
}

void solve() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= s; j++) {
			dp[i][j] = dp[i-1][j];
			if (j >= w[i]) dp[i][j] = max(dp[i][j], dp[i-1][j - w[i]]+ v[i]);
		}
	}
	cout << dp[n][s] << endl;
}

void path() {
	vector<int> Path;
	while (n != 0) {
		if (dp[n - 1][s] != dp[n][s]) {
			Path.push_back(n);
			s -= w[n];
		}
		n--;
	}
	for (int x : Path) cout << x << " ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	solve();
	path();
	return 0;
}


