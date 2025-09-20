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

int n, m, sz[N], parent[N];
void ktao() {
	for (int i = 1; i <= n; i++) {
		sz[i] = 1;
		parent[i] = i;
	}
}

int find(int u) {
	if (u == parent[u]) return u;
	else {
		return parent[u] = find(parent[u]);
	}
}

bool Union(int u, int v) {
	u = find(u);
	v = find(v);
	if (u == v) return false;
	else {
		if (sz[u] > sz[v]) {
			parent[v] = u;
			sz[u] += sz[v];
		}
		else {
			parent[u] = v;
			sz[v] += sz[u];
		}
	}
	return true;
}

struct edge{ 
	int x,y, w;
};

vector<edge> edges;

void nhap() {
	cin >> n >> m;
	for (int i = 0 ; i < m; i++) {
		int x,y, w; cin >> x >> y >> w;
		edge e{x,y,w};
		edges.push_back(e);
	}
}

bool cmp(edge a, edge b) {
	return a.w < b.w;
}

void kruskal() {
	vector<edge> mst;
	int d = 0;
	sort(edges.begin(), edges.end(), cmp);
	for (int i = 0; i < m; i++){
		if (mst.size() == n - 1) break;
		edge e = edges[i];
		if (Union(e.x,e.y)) {
			mst.push_back(e);
			d += e.w;
		}
	}
	cout << d << "\n";
	for (auto it : mst) cout << it.x << " " << it.y << " " << it.w << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	ktao();
	kruskal();
	return 0;
}
/*
6 9
1 2 1
1 3 2
3 2 3
2 4 4
2 5 7
3 5 5
4 5 3
4 6 2
5 6 2
*/



