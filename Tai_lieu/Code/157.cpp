#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 1e15;
int pre[555], dp[555][555], a[555];

int calc(int l, int r)
{
    if(l == r) return dp[l][l] = a[l];
    if (dp[l][r] != inf) return dp[l][r];
    int ans = inf, sum = pre[r] - pre[l - 1];
    for (int i = l; i < r; i++)
        ans = min(ans, calc(l,i) + calc(i + 1, r) + sum);
    return dp[l][r] = ans;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i], pre[i] = pre[i - 1] + a[i];
    for (int i = 1; i <= n; i++) for (int j = i; j <= n; j++) dp[i][j] = inf;
    cout << calc(1, n) - pre[n];
}
