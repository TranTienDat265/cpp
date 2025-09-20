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
	for (int  i = 0; i < m; i++) {
		int x,y,w; cin >> x >> y >> w;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}
}

int pre[N];

void find(int s) {
	vector<ll> d(n + 1, 1e18);
	d[s] = 0;
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({0, s}); 
	pre[s] = 0;
	while (!q.empty()) {
		ii it = q.top(); q.pop();
		int u = it.se, kc = it.fi;
		if (kc > d[u]) continue;
		for (ii e : adj[u]) {
			int v = e.fi, w = e.se;
			if (d[u] + w < d[v]) {
				pre[v] = u;
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
	}
	if (d[n] == 1e18) cout << -1;
	else {
		cout << d[n] << endl;
		vector<int> path;
		while (n != s) {
			path.push_back(n);
			n = pre[n];
		}
		path.push_back(s);
		reverse(path.begin(), path.end());
		for (int  x : path) cout << x << " ";
	}

}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	find(1);
	return 0;
}

/*
3 3
1 2 1
2 3 2
1 3 3
*/


