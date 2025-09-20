#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second

int a[1001],n,s;
bool dp[500001];

void inp() {
	cin >> n >> s;
	for (int i = 1; i <= n; i++) cin >> a[i];
	memset(dp,false,sizeof(dp));
}

void solve() {
	dp[0] = true;
	for (int i = 1; i<= n; i++) {
		for (int j = s; j >= 0; j--) {
			if (dp[j-a[i]]) dp[j] = true;
		}
	}
	cout << dp[s] << endl;
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
//Subset Sum Problem
//8 92
//69 16 82 170 31 24 45 112
