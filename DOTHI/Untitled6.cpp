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
int d[N];

void nhap() {
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(used, false, sizeof(used));
	memset(d, 0, sizeof(d));
}

void bfs(int u) {
	queue<int> q;
	q.push(u);
	used[u] = true;
	while (!q.empty()) {
		int v = q.front(); q.pop();
//		cout << v << " ";
		for (int x : adj[v]) {
			if (!used[x]) {
				q.push(x);
				used[x] = true;
				d[x] = d[v] + 1;
			}
		}
	}
}

void giai() {
	bfs(1);
	for (int i = 1; i <= n; i++) cout << d[i] << " ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	giai();
	return 0;
}




