#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "EQLARRAY"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e5 + 1;
const int MOD = (int) 1e9 + 7;

int a[maxn],n,k,max_;
ll s = 0;

void inp() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; s += 1LL  * a[i];
		max_ = max(max_, a[i]);
	}
}

void solve() {
	if (s % k == 0 && max_<=s/k) {
		cout << "YES\n";
	}
	else cout << "NO\n";
	max_ = 0; s = 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	int t; cin >> t;
//	int t = 1;
	while (t--) {
		inp();
		solve();
	}
	return 0;
}




