#include <bits/stdc++.h>
using namespace std;
#define int long long 
int f[100005],a[100005];
main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n; cin >> n;
	for (int i=1;i<=n;i++) cin >> a[i];
	f[1]=0;
	f[2]=abs(a[2]-a[1]);
	for (int i=3;i<=n;i++) 
		f[i]=min(f[i-1]+abs(a[i]-a[i-1]),f[i-2]+abs(a[i]-a[i-2]));
	cout << f[n];
}