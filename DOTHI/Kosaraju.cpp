#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 100001;
bool used[maxn];
int n,m;
vector<int>adj[maxn], r_adj[maxn];
stack<int> st;

void inp() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		r_adj[y].push_back(x);
	}
}

void dfs1(int u) {
	used[u] = true;
	for (int x : adj[u]) {
		if (!used[x]) {
			dfs1(x);
		}
	}
	st.push(u);
}

void dfs2(int u) {
	used[u] = true;
	for (int x : r_adj[u]) {
		if (!used[x]) {
			dfs2(x);
		}
	}
}

void SCC() {
	memset(used,false,sizeof(used));
	for (int i = 1; i<=n;i++) {
		if (!used[i]) dfs1(i);
	}
	int cnt = 0;
	vector<int> a;
	memset(used,false,sizeof(used));
	while (!st.empty()) {
		int v = st.top(); st.pop();
		if (!used[v]) {
			a.push_back(v);
			dfs2(v);
			cnt++;
		}
	}
	if (cnt == 1) cout << "YES\n";
	else {
		cout << "NO\n";
		cout << a[1] << " " << a[0];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	SCC();
	return 0;
}
//8 9
//1 2
//2 3
//3 4
//4 1
//3 5
//5 6
//6 7
//7 8
//8 6
