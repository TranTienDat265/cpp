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
const int maxn = (int) 1001;
const int MOD = (int) 1e9 + 7;
int n,m,parent[maxn],size[maxn];
struct edge{
	int u, v;
	int w;
};
vector<edge> canh;

void make_set() {
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
		size[i] = 1;
	}
}

int find(int v) {
	if (v == parent[v]) {
		return v;
	}
	return parent[v] = find(parent[v]);
}

bool Union(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b) return false;
	if (size[a] < size[b]) swap(a,b);
	parent[b] = a;
	size[a] += size[b];
	return true;
}

void inp() {
	cin >> n >> m;
	for (int  i = 0; i < m; i++) {
		int x,y,w; cin >> x >> y >> w;
		edge e;
		e.u = x; e.v = y; e.w = w;
		canh.push_back(e);
	}
}

bool cmp(edge a, edge b) {
	return a.w < b.w;
}

void kruskal() {
	vector<edge> mst;
	int d = 0;
	sort(canh.begin(), canh.end(), cmp);
	for (int i = 0; i < m; i++) {
		if (mst.size() == n - 1) break;
		edge e = canh[i];
		if (Union(e.u, e.v)) {
			mst.push_back(e);
			d += e.w;
		}
	}
	if (mst.size() != n - 1){
		cout << "Do thi khong lien thong\n";
	}
	else {
		cout << "MST: " << d << endl;
		for (auto it : mst) cout << it.u << " " << it.v << " " << it.w <<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
//	int t; cin >> t;
	inp();
	make_set();
	kruskal();

	return 0;
}




