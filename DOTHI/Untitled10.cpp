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
const int N = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;
typedef pair<int,int> ii;

vector<ii> adj[N];
int n,m;

void nhap() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y,w; cin >> x >> y >> w;
		adj[x].pb({y,w});
		adj[y].pb({x,w});
	}
}

void dijkstra(int s) {
	vector<int> d(n+1, 1e9);
	d[s] = 0;
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({0,s});
	while (!q.empty()) {
		ii it = q.top(); q.pop();
		int u = it.se, kc = it.fi;
		if (kc > d[u]) continue;
		for (ii e : adj[u]) {
			int v = e.fi, w = e.se;
			if (d[u] + w < d[v]) {
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << d[i] << ' ';
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	dijkstra(1);
	return 0;
}




