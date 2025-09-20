#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"

vector<int> adj[1001];
bool visited[1001];
queue<int> q;
int n = 0, m = 0;
void inp() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void dfs(int u) {
	visited[u] = true;
	cout << u << " ";
	for (int x : adj[u]) {
		if (!visited[x]) {
			dfs(x);
		}
	}
}

void bfs(int u) {
	q.push(u);
	visited[u] = true;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		cout << v <<  " ";
		for (int x : adj[v]) {
			if (!visited[x]) {
				q.push(x);
				visited[x] = true;
			}
		}
	}

}

int connectComponent() {
	int cnt = 0;
	memset(visited, false, sizeof(visited));
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			cnt++;
			bfs(i);
			cout << endl;
		}
	}
	return cnt;
}

void bfs_review(int u) {
	q.push(u);
	visited[u] = true;
	while (!q.empty()) {
		int v = q.front();
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
	inp();
	cout << connectComponent();
	
	return 0;
}

