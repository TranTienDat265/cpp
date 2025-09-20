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

int n,m, a[1001][1001], d[1001][1001];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

typedef pair<int,int> ii;

void bfs(int i, int j) {
	queue<pair<int,int>> q;
	q.push({i,j});
	a[i][j] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			d[i][j] = 0;
		}
	}
	while (!q.empty()) {
		ii v = q.front(); q.pop();
		for (int k = 0; k < 4; k++) {
			int i1 = v.fi + dx[k], j1 = v.se + dy[k];
			if (i1 >= 1 and i1 <= n and j1 >= 1 and j1 <= m and a[i1][j1] == 0) {
				d[i1][j1] = d[v.fi][v.se] + 1; 
				a[i1][j1] = 1;
				q.push({i1,j1});
			}
		}
		
	}
}

void nhap() {
	cin >> n >> m;
	cin.ignore();
	string s;
	for (int i = 1; i <= n; i++) {
		getline(cin, s);
		for (int j = 0; j < m; j++) {
			a[i][j+1] = int(s[j] - '0');
		}
	}
}

void giai() {

	if (a[n][m] == 1) {
		cout << -1;	
	}
	else {
		bfs(1,1);
		cout << d[n][m];
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




