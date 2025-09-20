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
const int maxn = (int) 1e3 + 1;
const int MOD = (int) 1e9 + 7;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int prefix[n], a[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		prefix[0] = 0;
		prefix[1] = a[1];
		for (int i = 2; i <= n; i++) {
			prefix[i] = prefix[i - 1] + a[i];
		}
		int ans = 0;
		for (int i = 2; i <= n; i++) {
			if (a[i] < prefix[i - 1]) ans = i;
		}
		cout << prefix[ans] << endl;
	}
	return 0;
}




