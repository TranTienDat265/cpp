#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "CAU2"

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	int n;
	cin >> n;
	int ans = 0;
	int a[n + 1];
	int c[1000001] = {0};
	map<int,int> mp;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		c[a[i]]++;
		ans = max(c[a[i]], ans);
	}
	cout << ans;
	return 0;
}
