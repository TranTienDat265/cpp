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

int n,m,k, mark[N];
vector<int> adj[N];
bool used[N];
vector<int> nguoi;


void nhap() {
	cin >> k >> n >> m;
	for (int i = 0; i < k; i++) {
		int x; cin >> x;
		nguoi.pb(x);
	}
	for (int i = 0 ; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(used, false, sizeof(used));
	memset(mark, 0, sizeof(mark));
}

void dfs(int u) {
	used[u] = true;
	mark[u]++;
	for (int v : adj[u]) {
		if (!used[v]) {
			dfs(v);
		}
	}
}

void giai() {
	for (int x : nguoi) { 
		memset(used, false, sizeof(used));
		dfs(x);
	}
	for (int i = 1; i <= n; i++) {
		if (mark[i] == k) cout << i << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap(); 
	giai();	

	return 0;
}
/*
4 10 15
1
4
5
7
10 3
5 6
4 9
5 3
8 6
4 6
8 9
3 9
1 9
6 9
7 9
9 6
7 3
2 9
5 9
2 4 4
2 3
1 2
1 4
2 3
3 4
*/




