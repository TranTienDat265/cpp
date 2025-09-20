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

vector<int> adj[100001], t_adj[100001];
bool used[100001];
stack<int> st;
int n,m;

void nhap() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		t_adj[y].push_back(x);
	}
	memset(used, false, sizeof(used));
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
	cout << u << " ";
	used[u] = true;
	for (int v : t_adj[u]) {
		if (!used[v]) dfs2(v);
	}
} 

void kosaraju() {
	for (int i = 1; i <= n; i++) {
		if (!used[i]) dfs1(i);
	}
	memset(used, false, sizeof(used));
	int scc= 0;
	while (!st.empty()) {
		int top = st.top(); st.pop();
		if (!used[top])  {
			scc++;
			dfs2(top);
			cout << endl;
		}
	}
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	kosaraju();
	return 0;
}
/*
8 11
1 2
2 3
3 4
4 1
3 5
5 2
5 6
6 7
7 8
8 5
8 6
*/



