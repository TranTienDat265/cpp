#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

vector<int> adj[1001];
int n,m, parent[1001];
bool used[1001];

void dfs(int u) {
	used[u] = true;
	for (int x : adj[u]) {
		if(!used[x]) {
			parent[x] = u;
			dfs(x);
		}
	}
}

void bfs(int u) {
	queue<int> q;
	q.push(u);
	used[u] = true;
	while (!q.empty()) {
		int v = q.front(); q.pop();
		for (int x : adj[v]) {
			if (!used[x]) {
				q.push(x);
				used[x] = true;
				parent[x] = v;
			}
		}
	}
	
}

void inp() {
	cin >> n >> m;
	for (int i  = 0; i< m ; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void Path() {
	int s,t; cin >> s >> t;
	memset(used,false,sizeof(used));
	bfs(s);
	if (!used[t]) cout << "NO\n";
	else {
		vector<int> res;
		while (s != t) {
			res.push_back(t);
			t = parent[t];
		}
		res.push_back(t);
		reverse(res.begin(), res.end());
		for (int x : res) cout << x << " ";
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	Path();
	return 0;
}




