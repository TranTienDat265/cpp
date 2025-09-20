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
const int maxn = (int) 1e4 + 1;
const int MOD = (int) 1e9 + 7;

bool used[maxn];
stack<int>st;
vector<int> adj[maxn], r_adj[maxn];
int n,m;

void inp() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].pb(y); r_adj[y].pb(x);
	}
	memset(used,false,sizeof(used));
}

void dfs1(int u) {
	used[u] = true;
	for (int v : adj[u]) {
		if (!used[v]) {
			dfs1(v);
		}
	}
	st.push(u);
}

void dfs2(int u) {
	used[u] = true;
	for (int v : r_adj[u]) {
		if (!used[v]) {
			dfs2(v);
		}
	}
}

void kosaraju() {
	for (int i = 1; i <= n; i++) {
		if (!used[i]) dfs1(i);
	}
	int cnt =0;
	memset(used,false,sizeof(used));
	while (!st.empty()) {
		int v = st.top(); st.pop();
		if (!used[v]) {
			dfs2(v);
			cnt++;
		}
	}
	cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	kosaraju();
	return 0;
}




