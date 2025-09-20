#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"

vector<int> adj[1001];
bool visited[1001] = {false};
queue<int> q;
void dfs(int u) {
	cout << u << " ";
	visited[u] = true;
	for (int x : adj[u]) {
		if (!visited[x]) dfs(x);
	}
}

void bfs(int u) {
	q.push(u);
	visited[u] = true;
//	cout << u << " ";
	while (!q.empty()) {
		int v = q.front();
		cout << v << " ";
		q.pop();
		for (int x : adj[v]) {
			if (!visited[x]) {
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
//		adj[y].push_back(x);
	}
	bfs(1);
	return 0;
}

