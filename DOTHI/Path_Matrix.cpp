#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"
#define fi first
#define se second

int parent[101][101];
int d[1001][1001];
int s,t,u,v;
int n,m;
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
//U, L, R, D 
char a[101][101];
bool dfs(int i, int j) {
	if (a[i][j] == 'B') return true;
	a[i][j] = 'x';
	cout << i << " " << j << endl;
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1	 <= m && a[i1][j1] != 'x') {
			if (dfs(i1,j1)) return true;
		}
	}
	return false;
}

bool bfs(int i, int j) {
	memset(d, 0, sizeof(d));
	queue<pair<int,int>> q;
	q.push({i,j});
	d[i][j] = 0;
	while (!q.empty()) {
		pair<int,int> top = q.front(); q.pop();
		for (int k = 0; k < 4; k++) {
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != 'x') {
				if (i1 != i || j1 != j) d[i1][j1] = d[top.first][top.second] + 1;
				if (a[i1][j1] == 'B') return true;
				q.push({i1,j1});
				a[i1][j1] = 'x';
			}
		}
	}
}

void inp() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'A') {
				s = i; t = j;
			}
			else if (a[i][j] == 'B') {
				u = i; v = j;
			}
		}
	}
}

void Path() {
	pair<int,int> pos = {u,v};
	vector<char> path;
	char way[4] = {'U', 'L', 'R', 'D'};
	while (pos.fi != s || pos.se != t) {
		for (int k = 0; k < 4; k++) {
			int i1 = pos.fi + dx[k];
			int j1 = pos.se + dy[k];
			if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && d[i1][j1] == d[pos.fi][pos.se] - 1) {
				path.push_back(way[3 - k]);
				pos.fi = i1;
				pos.se = j1;
				break;
			}
		}
	}
	reverse(path.begin(), path.end());
	for (auto it : path) cout << it << " ";
}	

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	bfs(s,t);
	if (!d[u][v]) cout << "Khong co duong di!\n";
	else {
		cout << d[u][v] << endl;
		Path();
	}
	return 0;
}

//6 6
//Aooxoo
//oxoooo
//oxoooo
//ooooxx
//Boooxo
//oooxxx

