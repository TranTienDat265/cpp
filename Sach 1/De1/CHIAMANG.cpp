#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "CHIAMANG"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 1e3 + 1;
const int MOD = 1e9 + 7;

int a[maxn], n, sum = 0;

void inp() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
}

void solve() {
	int s = 0, res = 0;
	for (int i = 0; i < n; i++) {
		s += a[i];
		if (2 * s == sum) res = i + 1;
	}
	cout << res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
//	int t; cin >> t;
	int t = 1;
	while (t--) {
		inp();
		solve();
	}
	return 0;
}



