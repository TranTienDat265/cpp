#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 1e6 + 1;
const int MOD = 1e9 + 7;

int sum[maxn], a[maxn],n;

void inp() {
	cin >> n;
	memset(sum,0,sizeof(sum));
	for (int i = 1; i<=n; i++) {
		cin >> a[i];
		sum[i] = sum[i-1]+ a[i];
	}
}

void solve() {
	int res = -1;
	for (int i = 1; i <= n; i++) {;
		if (sum[i-1] == sum[n] - sum[i]) {
			cout << i << " ";
			res = i;	
		}
	}
	if (res == -1) cout << res << endl;
	else cout << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	int t; cin >> t;
	while (t--) {
		inp();
		solve();
	}
	return 0;
}
//2
//7
//-7 1 5 2 -4 3 0
//4
//1 2 3 4


