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

vector<int> adj[N];
bool used[N];
int n,m, sz[N], par[N];

int find(int u) {
	if (u == par[u]) return u;
	return par[u] = find(par[u]);
}

bool Union(int a, int b){ 
	a = find(a);
	b = find (b);
	if (a == b) return false;
	if (sz[a] <= sz[b]) swap(a,b);
	sz[a] += sz[b];
	par[b] = a;
	return true;
}

void nhapgiai() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		par[i] = i;
		sz[i] = 1;
	}
	int cnt = n;
	for (int i = 0 ; i < m; i++) {
		int x,y; cin >> x >> y;
		if (Union(x,y)) {
			n--;
			cout << n << " " << sz[x] << " " << sz[y] << endl;
 		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhapgiai();
	return 0;
}
/*
5 3
1 2
1 3
4 5
*/




