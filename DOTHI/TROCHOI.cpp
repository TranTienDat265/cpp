#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e5 + 1;
const int MOD = (int) 1e9 + 7;

int n,m;

void solve(){
	cin >> n >> m;
	vector<int> adj[n + 1];
	for (int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	int ans = 0;
	int a[n+1];
//	int cnt = 0;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		a[i] = adj[i].size();
		if (a[i] % 2 == 0) {
			q.push(i);
		}
	}
	for (int i = 1; i <= n; i++) cout << a[i] << " ";
	cout << endl;
	while (!q.empty()) {
		int v = q.front(); q.pop();
		if (a[v] > 0 && a[v] % 2 == 0) {
			a[v] = 0;
			ans++;
			for (int x : adj[v]) {
				a[x]--;
				if (a[x] > 0 && a[x] % 2 == 0) q.push(x);
			}
			for (int i = 1; i <= n; i++) cout << a[i] << " ";
			cout << endl;
		}
	}
	cout << ans;
	if (ans % 2 == 1) cout << "Khoa\n";
	else cout << "Ngan\n";
}

void trau() {
	cin >> n >> m;
	vector<int> adj[n + 1];
	for (int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	int t; cin >> t;
//	int t = 1;
	while (t--) {
//		inp();
		solve();
	}
	return 0;
}




