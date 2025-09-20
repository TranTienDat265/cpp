#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "HALF"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

int n,m;
int a[21][21],dp[21][21];

void inp() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
}

void backtrack(int s, int t) {
	for (int i = s; i <= n; i++ ) {
		for (int j = t; j <= m; j++) {
			
		}
	}
}

void solve() {
	memset(dp,0,sizeof(dp));
	backtrack(1,1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	
	return 0;
}




