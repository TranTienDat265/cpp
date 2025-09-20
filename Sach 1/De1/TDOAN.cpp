#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "TDOAN"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 2*1e3+ 1;
const int MOD = 1e9 + 7;

int n,k,a[maxn];

void inp(){
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void solve() {
	int l = 0, r = 0, sum = a[0], idx = 0, res = INT_MAX;
	while (l <= r && r < n) {
		if (sum < k) {
			r++;
			sum += a[r];
		}
		while (sum >= k) {
			if (sum == k) {
				if (res > r - l + 1) {
					res = r - l + 1;
					idx = l + 1;
				}
			}
			sum -= a[l];
			l++;
			if (l == r) {
				r++;
				sum += a[r];
			}
		}
	}
	if (res == INT_MAX) cout << 0;
	else cout << idx << " " << res;
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



