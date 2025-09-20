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
const int maxn = (int) 2e5 + 1;
const int MOD = (int) 1e9 + 7;
const ll INF = 1e18;

vector<pair<ll,ll>> adj[maxn];
int n,m,k;

void inp() {
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) {
		ll x,y,w; cin >> x >> y >> w;
		adj[x].pb({y,w});
//		adj[y].pb({x,w});
	}
}

vector<ll> res;

void add(ll val) {
	res.push_back(val);
	
}

void dijkstra(int s) {
	priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
	vector<ll> d(n + 1, INF);
	vector<bool> visited(n + 1, false);
	d[s] = 0;
	q.push({0,s});
	vector<ll> res;
	while (!q.empty()) {
		pair<ll,ll> top = q.top(); q.pop();
		ll u = top.se;
		if (visited[u]) continue;
		visited[u] = true;
		for (auto it : adj[u]) {
			ll v = it.fi;
			ll w = it.se;
			if (d[v] >= d[u] + w) {
				d[v] = d[u] + w;
				if (v == n) res.push_back(d[v]);
				q.push({d[v],v});
			}	
		}
	}
	for (ll x : res) cout << x << " ";
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	inp();
	dijkstra(1);
	
	return 0;
}




