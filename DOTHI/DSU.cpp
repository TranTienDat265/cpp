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

int parent[1005],size[1005];

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
	return find[v] = find(parent[v]);
}

void union_(int a, int b) {
	a = find(a); b = find(b);
	if (a!=b){
		if (size[a] < size[b]) swap(a,b);
		parent[b] = a;
		size[a] += size[b];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	
	return 0;
}




