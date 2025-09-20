#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int MOD = 1000000007;
int n, a[500], s;
//int dp[500][65000];
void inp() {
	cin >> n;
	s = n*(n+1)/4;
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
//	memset(dp,0,sizeof(dp));
}

void solve() {
	if ((n *(n+1)/2)  % 2 != 0 ) {
		cout << 0;
		return;
	}
//	dp[1][1] = 1;
//	for (int i = 2; i <= n; i++) {
//		for (int j = 1; j <= s; j++) {
//			dp[i][j] = dp[i-1][j];
//			if (j > i) dp[i][j] += dp[i-1][j-i];
//			dp[i][j] %= MOD;
//		}
//	}
//	cout<<dp[n][s]<<endl;
	vector<int> dp(s + 1, 0);
    dp[0]=1;
 	for (int i = s; i>=1;i--) cout << i << " ";
 	cout << endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=s;j>=i;j--)
        {
            dp[j] = (dp[j]+dp[j-i])%MOD;
            cout << dp[j] << " " << dp[j-i] << endl;
        }
        cout << endl;
    }
	cout<<(dp[s])%MOD<<endl;
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
//Two Sets II


