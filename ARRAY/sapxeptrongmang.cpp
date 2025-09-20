#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "ARRAY"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 1e6 + 1;
const int MOD = 1e9 + 7;

int n,m,a[maxn], pos[maxn];

void inp() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}	
	memset(pos,0,sizeof(pos));
	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		pos[x - 1] = 1;
	}
}

void solve() {
	
	for (int i = 0; i < n; i++) {
		if (!pos[i]) continue;
		int idx = i;
		while (idx < n && pos[idx]) idx++;
		sort(a + i, a + idx + 1);
		i = idx;
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i-1]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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
//6 
//3 2
//3 2 1
//1 2
//4 2
//4 1 2 3
//3 2
//5 1
//1 2 3 4 5
//1
//4 2
//2 1 4 3
//1 3
//4 2
//4 3 2 1
//1 3


