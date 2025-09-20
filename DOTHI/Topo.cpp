#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"

int n,m;
vector<int> adj[1001];
bool visited[1001];
vector<int>topo;
int in[1001];
void inp(){
	memset(in, 0, sizeof(in));
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		in[y]++;
	}
	memset(visited, false, sizeof(visited));
}

void dfs(int u) {
	visited[u] = true;
	for (int x : adj[u]) {
		if (!visited[x]) {
			dfs(x);
		}
	}
	topo.push_back(u);
}

void kahn() {
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (in[i] == 0) q.push(i);
	}
	while (!q.empty()) {
		int u = q.front(); q.pop();
		topo.push_back(u);
		for (int v : adj[u]) {
			in[v]--;
			if (in[v] == 0) q.push(v);
		}
	}
	for (int x : topo) cout << x << " ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	inp();
//	kahn();
	for (int i = 1; i <= n;i++) {
		if (!visited[i]) dfs(i);
	}
	reverse(topo.begin(), topo.end());
	for (int x : topo) cout << x << " ";
	return 0;
}
//7 7
//1 2
//2 3
//2 4
//3 5
//4 5
//1 6
//7 6

