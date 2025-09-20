#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

int n,m, parent[1001],size[1001];
map<int,int> mp;
void make_set() {
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
		size[i] = 1;
	}
}

int find(int v) {
	if (v == parent[v]) {
		return v;
	}
	return parent[v] = find(parent[v]);
}

void union_(int a, int b) {
	a = find(a);
	b = find(b);
	cout << a << " " << b << endl;
	if (a!=b) {
		if (size[a] < size[b]) swap(a,b);
		parent[b] = a;
		size[a] += size[b];
		
	}
}

void solve() {
	cin >> n >> m;
	make_set();
	for (int i = 1; i <= n; i++) 
	for (int k = 0; k < m; k++) {
		int x,y; cin >> x >> y;
		union_(x,y);
	}
	cout << size[3];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	solve();
	return 0;
}




