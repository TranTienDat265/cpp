#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"

queue<int>  q;
bool visited[1001];
vector<int> adj[1001];
int parent[1001];
int n,m;
void inp() {
	
	cin >> n >> m;
	for (int i  = 0; i< m ; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void bfs(int u) {
	q.push(u);
	visited[u] = true;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int x : adj[v]) {
			if (!visited[x]) { 
				q.push(x);
				parent[x] = v;
				visited[x] = true;
			}
		}
	}
}

void dfs(int u) {
	visited[u] = true;
	for (int v : adj[u]) {
		if (!visited[v]) {
			parent[v] = u;
			dfs(v);
		}
	}
}

void Path(int s, int t) {
	memset(parent, 0, sizeof(parent));
	memset(visited, false, sizeof(visited));
	bfs(s);
	if (!visited[t]) cout << "KHONG CO DUONG DI!\n";
	else {
		vector<int>path;
		while (s != t) {
			path.push_back(t);
			t = parent[t];
		}
		path.push_back(s);
		reverse(path.begin(), path.end());
		for (int x : path) cout << x << " ";
	}
	cout << endl;
		for (int i = 1; i <= n; i++) {
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1; i <= n; i++) {
		cout << parent[i] << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	int s,t;
	cin >> s >> t;
	Path(s,t);
	return 0;
}

//10 10
//1 2
//2 3
//2 4
//3 6
//3 7
//6 7
//7 5
//5 8
//5 10
//8 9
//1 8

