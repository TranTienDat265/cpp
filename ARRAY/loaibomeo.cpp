#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 1e6 + 1;
const int MOD = 1e9 + 7;

int n, a[maxn];

void inp() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void solve() {
	int res = INT_MIN, dem = 1;
	for (int i = 0; i < n - 1; i++) {
		if (a[i+1] == a[i]) dem++;
		else dem = 1;
		res = max(res, dem);
	}
	cout << n - res << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
//	int t; cin >> t;
	int t = 1;
	while (t--) {
		inp();
		solve();
	}
	return 0;
}



