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

vector<int> adj[N];
bool used[N], AP[N];
int n,m, timer = 0;
int disc[N], low[N];

void nhap() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
//		adj[y].push_back(x);
	}
	memset(used, false, sizeof(used));
	memset(AP, false, sizeof(AP));
}

void dfs(int u, int par) {
	used[u] = true;
	disc[u] = low[u] = timer++;
	int child = 0;
	for (int v : adj[u]) {
		if (v == par) continue;
		if (!used[v]) {
			dfs(v,u);
			child++;
			low[u] = min(low[u], low[v]);
			if (par != -1 and disc[u] <= low[v]) AP[u] =true;
		}
		else{
			low[u] = min(low[u], disc[v]);
		}
	}
	if (par == -1 and child > 1) AP[u] = true;
}

void giai() {
	for (int i = 1; i <= n; i++) {
		if (!used[i]) dfs(i, -1);
	}
	int res= 0;
	for (int i = 1; i <= n; i++ ) {
		if (AP[i]) res++;
	}
	cout << res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	giai();
	return 0;
}
/*
6 8
1 3
6 1
6 3
4 1
6 4
5 2
3 2
3 5
*/



