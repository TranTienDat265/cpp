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

int n,m, parent[10005];
bool used[100005];
vector<int> adj[100005];
bool ok = false;
char a[1001][1001];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void loang(int i, int j) {
	a[i][j] = '#';
	for (int k = 0; k < 4; k++) {
		int i1 = i+dx[k];
		int j1 = j+dy[k];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == '.') {
			loang(i1,j1);
		}
	}
}

void nhap2() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
}

bool dfs(int u) {
	used[u] = true;
	for (int v : adj[u]) {
		if (!used[v]) {
			parent[v] = u;
			dfs(v);
		}
		else if (v != parent[u]) {
			ok = true;
		}
	}
}
 
void nhap() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void giai() {
	dfs(1);
	if (m == n - 1 && !ok) cout << "YES\n";
	else cout << "NO\n";
}

void tplt2c() {
	nhap2();
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == '.') {
				loang(i,j);
				cnt++;
			}
		}
	}
	cout << cnt;
}

void dfst(int u) {
	used[u] = true;
	for (int v : adj[u]) {
		if (!used[v]) {
			dfst(v);
		}
	}
}

void giai3() {
	nhap();
	int cnt = 0;
	vector<int> res;
	memset(used, false, sizeof(used));
	for (int i = 1; i <= n; i++) {
		if (!used[i]) {
			dfst(i);
			cnt++;
			res.push_back(i);
		}
	} 
	cout << cnt - 1 << endl;
	for (int i = 0; i < res.size() - 1; i++) {
		cout << res[i] << " " << res[i + 1] << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	tplt2c();
	giai3();
	
	return 0;
}
/*
6 6
1 2
2 3
1 4
4 5
5 6
6 4
*/
/*
6 6
..###.
...#..
#..#..
.##.#.
######
.#.##.
*/


