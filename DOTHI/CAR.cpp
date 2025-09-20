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

vector<pair<ll,ll>> adj[maxn];
int pre[maxn];
ll n, m;

void inp() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		ll x,y,w; cin >> x >> y >> w;
		adj[x].pb({y,w});
//		adj[y].pb({x,w});
	}
}

void dijkstra(int s) {
	priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
	vector<ll> d(n + 1, LLONG_MAX);
	vector<bool> visited(n + 1, false);
	d[s] = 0;
	pq.push({0, s});
	pre[s] = s;
	//{khoang cach, dinh}
	while (!pq.empty()) {
		pair<ll,ll> top = pq.top(); pq.pop();
		ll u = top.se;
		if (visited[u]) continue;
		visited[u] = true;
		for (auto it : adj[u]) {
			ll v = it.fi;
			ll w = it.se;
			if (d[v] > d[u] + w) {
				d[v] = d[u] + w;
				pq.push({d[v],v});
				pre[v]  = u;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << d[i] << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	inp();
	dijkstra(1);
	return 0;
}




