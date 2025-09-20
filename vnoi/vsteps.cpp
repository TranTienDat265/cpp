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

ll dp[maxn];
bool mark[maxn];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k; cin >> n >> k;
	while (k--) {
		int x; cin >> x; mark[x] = true;
	}
	dp[0] = 0; dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		 dp[i] = mark[i] ? 0 : ((dp[i-1]+dp[i-2])%14062008);
	}
	cout << dp[n];
	return 0;
}




