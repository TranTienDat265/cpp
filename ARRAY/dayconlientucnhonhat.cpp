#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "ARRAY"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 1e6 + 1;
const int MOD = 1e9 + 7;

int n,m,a[maxn];

void inp() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void solve(){
	int l = 0;
	int r = 0;
	int sum = a[0];
	int res = INT_MAX;
	while (l <= r && r < n) {
		if (sum < m){
			r++;
			if (r < n) sum += a[r];
		} 
		else {
			l++;
			sum -= a[l - 1];	
		}
		if (sum > m) res = min(res, r - l + 1);
	}
	if (res == INT_MAX) cout << -1 << endl;
	else cout << res << endl;
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
//2
//6 51
//1 4 45 6 0 19
//3 8
//1 2 4


