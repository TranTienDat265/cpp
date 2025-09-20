#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, k, a[100005];

bool check(int x)
{
    int cur = 0;
    for (int i = 1; i <= n; i++)
    {
        int pos = upper_bound(a + i + 1, a + n + 1, a[i] + x) - a - 1;
        cur += pos - i;
    }
    return cur >= k;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int l = 1, r = 1e9, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid)) ans = mid, r = mid - 1;
        else l = mid + 1;
    }
    cout << ans;
}
