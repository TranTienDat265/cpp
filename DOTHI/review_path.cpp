#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"

bool visited[101];
vector<int> adj[101];
int parent[101];
queue<int> q;

void dfs(int u) {
	visited[u] = true;
	for (int v : adj[u]) {
		if (!visited[v]) {
			parent[v] = u;
			dfs(v);
		}
	}
}

void bfs(int u) {
	visited[u] = true;
	q.push(u);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int x : adj[v]) {
			if (!visited[x]) {
				visited[x] = true;
				parent[x] = v;
				q.push(x);
			}
		}
	}
}

void Path(int s, int t) {
	memset(visited, false, sizeof(visited));
	memset(parent, 0 , sizeof(parent));
	bfs(s);
	if (!visited[t]) cout << "Khong co duong di!\n";
	else {
		vector<int> path;
		while (s != t) {
			path.push_back(t);
			t = parent[t];
		}
		path.push_back(s);
		reverse(path.begin(), path.end());
		for (int x : path) cout << x <<  " ";
		cout << endl;
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
	for (int i =0; i < m;i++) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int s, t;
	cin >> s >> t;
	Path(s, t);
	return 0;
}
//10 8
//1 2
//2 3
//2 4
//3 6
//3 7
//5 8
//6 7
//8 9

