#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"

bool visited[1001];
vector<int> adj[1001];
vector<int>topo;
int in[1001];
int n,m;
void dfs(int u) {
	visited[u] = true;
	for (int v : adj[u]) {
		if (!visited[v]) {
			dfs(v);
		}
	}
	topo.push_back(u);
}

void inp() {
	cin >> n >> m;
	memset(in, 0, sizeof(in));
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		in[y]++;
	}
	memset(visited, false, sizeof(visited));
}

void topo_out() {
	for (int i = 1; i <=n; i++) {
		if (!visited[i]) dfs(i);
	}
	reverse(topo.begin(), topo.end());
	for (int x : topo) cout << x << " ";
}

void kahn() {
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (in[i] == 0) q.push(i);
	}
	while (!q.empty()) {
		int v = q.front();	q.pop();
		topo.push_back(v);
		for (int x : adj[v]) {
			in[x]--;
			if (in[x] == 0) q.push(x);
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
	kahn();
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
// topo: 7 1 6 2 4 3 5 
// kahn: 1 7 2 6 3 4 5 
