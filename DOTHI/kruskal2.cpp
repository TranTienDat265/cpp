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

// kruskal: cay khung cuc tieu: tim duong di ngan nhat sao cho trong so nho nhat giua cac do thi
struct edge{
	int x,y,w;
};
int n,m, sz[N], parent[N];
vector<edge> canh;

void nhap() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y,w; cin >> x >> y >> w;
		edge e{x,y,w};
		canh.push_back(e);
	}
}

int find(int u) {
	if (u == parent[u]) return u;
	else return parent[u] = find(parent[u]);
}

bool Union(int u, int v) {
	u = find(u);
	v = find(v);
	if (u == v) return false;
	if (sz[u] < sz[v]) {
		parent[u] = v;
		sz[v] += sz[u];
	}
	else {
		parent[v] = u;
		sz[u] += v;
	}
	return true;
} 

void ktao() {
	for (int i = 1; i <= n; i++) {
		sz[i] = 1;
		parent[i] = i;
	}
}

bool cmp(edge a, edge b) {
	return a.w < b.w;
}

void kruskal() {
	vector<edge> mst;
	int d = 0;
	sort(canh.begin(), canh.end(), cmp);
	for (int i = 0 ; i < m; i++) {
		if (mst.size() == n - 1) break;
		edge e = canh[i];
		if (Union(e.x, e.y)) {
			d += e.w;
			mst.pb(e);
		}
	}
	cout << d << endl;
	for (auto it : mst) {
		cout << it.x << " " << it.y << " " << it.w << endl;
	}
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




