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


int n,m, parent[10005];
bool used[10005];
vector<int> adj[100005];
bool ok = false;
char a[1001][1001];

void nhap() {
	cin >> n >> m;
	memset(deg, 0 , sizeof(deg));
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		deg[y]++;
	}
}

void Kahn() {
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (deg[i] == 0) q.push(i);
	}
	vector<int> topo;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		topo.push_back(v);
		for (int v : adj[u]) {
			deg[v]--;
			if (deg[v] == 0) q.push(v);
		}
	}
	if (topo.size() != n) cout << 1;
	else cout << 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	Kahn();

	
	return 0;
}




