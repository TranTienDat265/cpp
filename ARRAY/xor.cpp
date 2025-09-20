#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
int a[100001],n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = a[0];
	cout << ans << " ";
	for (int i = 1; i < n; i++) {
		ans ^= a[i];
		cout << ans << " ";
	}
	return 0;
}


