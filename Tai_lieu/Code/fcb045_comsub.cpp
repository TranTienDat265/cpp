#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mode=1e9+7;
int a[100005],b[100005];

main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m; cin >> n >> m;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=m;i++) cin >> b[i];
    vector<vector<int>> dp(n+1,vector<int> (m+1,1));
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            dp[i][j]=(dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+(a[i]==b[j]?(dp[i-1][j-1]):0)+mode)%mode;

        }
    cout << dp[n][m];
}
