#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "CHIATAY"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 1e5 + 1;
const int MOD = 1e9 + 7;

vector<int> adj[maxn];
bool visited[maxn];
int n;
int d[maxn];
ll ans = LLONG_MIN;

void inp() {
	cin >> n;
	for (int i = 0 ; i < n - 1; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
}

void bfs(int u) {
	queue<int> q; 
	q.push(u); 
	visited[u] = true;
	memset(visited,false,sizeof(visited));
	memset(d,0,sizeof(d));
	while (!q.empty()) {
		int v = q.front(); q.pop();
		for (int x : adj[v]) {
			if (!visited[x]) {
				q.push(x);
				visited[x] = true;
				d[x] = max(d[v] + 1, d[x]);
				ans = max(ans, 1LL*d[x]);
			}
		}
	}
//	for (int i = 1;  i <= n; i++) cout << d[i] <<" ";
}

void solve() {
	for (int i = 1; i <= n ; i++) {
		bfs(i);
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	solve();
	return 0;
}


