#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"
#define ms(s,n) memset(s,n,sizeof(s))
bool visited[1001];
vector<int> adj[1001];
int n, m, st, en;
int parent[1001];
int color[1001];
int degree[1001];

void inp() {
	ms(degree, 0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		degree[y]++;
//		adj[y].push_back(x);
	}
	ms(visited,false);
	ms(parent, 0);
	ms(color, 0);

}

bool dfs(int u) {
	visited[u] = true;
	for (int x : adj[u]) {
		if (!visited[x]) {
			parent[x] = u;
			if (dfs(x)) return true;
		}
		else if (x != parent[u]){
			st = x; en = u;
			cout << st << " " << en << endl;
			return true;
		} 
	} 
	return false;
}

bool Kahn() {
	queue<int>q;
	for (int i = 1; i <= n; i++) {
		if (degree[i] == 0) q.push(i);
	}
	int cnt = 0;
	while (!q.empty()) {
		int v = q.front(); q.pop();
		cnt++;
		for (int x : adj[v]) {
			degree[x]--;
			if (degree[x] == 0) q.push(x);
		}
	}
	cout << cnt << endl;
	return !(cnt == n);
}

bool bfs(int u) {// chi check duoc chu khong in ra chu trinh duoc
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while (!q.empty()) {
		int v = q.front(); q.pop();
		for (int x : adj[v]) {
			if (!visited[x]) {
				parent[x] = v;
				visited[x] = true;
				q.push(x);
			}
			else if (x != parent[v]) {
				return true;
			}
		}
	}
	return false;
}

bool dfs_oriented(int u) {
	color[u] = 1;
	for (int v : adj[u]) {
		if (color[v] == 0) {
			if (dfs_oriented(v)) return true;
		}
		else if (color[v] == 1) return true;
	}
	color[u] = 2;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	/*for (int i = 1; i <= n; i++) {
		if (color[i] == 0) {
			if (dfs_oriented(i)) {
				cout << "YES\n";
				return 0;
			}
		}
	}*/
	if (Kahn()) cout << "YES\n";
	else cout << "NO\n";
//	cout << "NO\n";
	return 0;
}

/*if (dfs(1)){
	cout << "YES\n";
	vector<int> path;
	path.push_back(st);
	while (en != st) {
		path.push_back(en);
		en = parent[en];
	}
	path.push_back(st);
	reverse(path.begin(), path.end());
	for (int x : path) cout << x << " ";
} 
else cout << "NO\n";*/
//KHONG HUONG
//7 6
//1 2
//2 3
//2 4
//3 6
//6 7
//7 3

//CO HUONG
//7 7
//1 2
//1 5
//2 3
//4 2
//3 6
//6 7
//3 7

