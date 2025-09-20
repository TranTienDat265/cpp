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
#define pip pair<int, pair<int,int>>

int n,m,a[505][505];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int d[505][505];
void nhap() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <=m; j++) {
			cin >> a[i][j];
		}
	}
}

void dijkstra(int i, int j) {
//	for ()
	priority_queue<pip, vector<pip>, greater<pip>>q;
	q.push({0, {1,1}});
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			d[i][j] = 1e9;
		}
	}
	d[1][1] = a[1][1];
	while (!q.empty()) {
		pip it = q.top(); q.pop();
		int i = it.se.fi, j = it.se.se;
		int kc = it.fi;
		if (kc > d[i][j]) continue;
		for (int k = 0; k < 4; k++) {
			int i1 = i + dx[k], j1 = j + dy[k];
			if (i1 >= 1 and i1 <= n and j1 >= 1 and j1 <=m and (d[i][j] + a[i1][j1] < d[i1][j1])) {
				d[i1][j1] = d[i][j] + a[i1][j1];
				q.push({d[i1][j1], {i1,j1}});
			}
		}
	}
	cout << d[n][m];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	dijkstra(1,1);
	return 0;
}
/*
6 7
0 3 6 0 5 9 1
6 5 4 4 0 7 6
4 0 2 1 5 6 1
2 7 7 3 3 1 6
4 4 9 6 9 7 2
3 6 4 4 1 9 2
*/



