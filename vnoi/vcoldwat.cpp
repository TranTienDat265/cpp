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
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

vector<int>adj[maxn];
bool used[maxn];
int dis[maxn];
int n,c;

void inp() {
	cin >> n >> c;
	for (int i = 0; i < c; i++) {
		int x,y,z; cin >> x >> y >> z;
		adj[x].pb(y);
		adj[x].pb(z);
		adj[y].pb(x);
		adj[z].pb(x);
	}
	memset(dis,0,sizeof(dis));
	memset(used,false,sizeof(used));
	dis[1] = 1;
}

void dfs(int u) {
	used[u] = true;
	for (int v: adj[u]) {
		if (!used[v]) {
			dis[v] = dis[u] + 1;
			dfs(v);
		}
	}
}

void solve() {
	dfs(1);
	for (int i = 1; i <= n; i++) {
		cout << dis[i] <<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	solve();
	return 0;
}




