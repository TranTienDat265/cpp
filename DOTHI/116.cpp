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

int n,m;
vector<int> adj[N];
bool used[N];
int d[N], par[N];

void nhap() {
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}	
	memset(used, false, sizeof(used));
	memset(d, -1, sizeof(d));
}

void bfs(int u) {
	queue<int> q;
	q.push(u);
	used[u] = true;
	d[u] = 0;
	par[u] = 0;
	while (!q.empty()) {
		int v = q.front(); q.pop();
		for (int x : adj[v]) {
			if (!used[x]) {
				d[x] = d[v] + 1;
				par[x] = v;
				q.push(x);
				used[x] = true;
			}
		}
	}
} 

void giai() {
	bfs(1);
	vector<int> path;
	cout << d[n] << endl;
	while (n != 1) {
		path.push_back(n);
		n = par[n];
	}
	path.push_back(1);
	reverse(path.begin(), path.end());
	for (int x: path) cout << x << " "; 
//	for (int i = 2; i <= n; i++) cout << par[i] << " ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	giai();
	return 0;
}




