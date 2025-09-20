#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define TASKNAME "DOTHI"

int n,m;
bool visited[101];
vector<int> adj[101];
pii lst[501];
void dfs(int u) {
	visited[u] = true;
	for (int v : adj[u]) {
		if (!visited[v]) {
			dfs(v);
		}
	}
}

int connectComponent(){
	memset(visited, false, sizeof(visited));
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			cnt++;
			dfs(i);
		}
	}
	return cnt;
}

void remove(int u, int v) {
	int idx;
	for (idx = 0; idx < adj[u].size(); idx++) 
		if (adj[u][idx] == v) break;
	adj[u].erase(adj[u].begin() + idx);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= m ; i++) {
		int x,y; cin >> x >> y;
		lst[i] = pii(x,y);
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int res = 0;
	for (int i = 1; i <= m; i++) {
		int u = lst[i].first; int v = lst[i].second;
		remove(u , v);
		remove(v , u);
		int p = connectComponent();
		if (p > 1) {
			res++;
			cout <<"Xung yeu " << res << ": "<< u << "-" << v << endl;
		}
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	cout << res;
	return 0;
}

