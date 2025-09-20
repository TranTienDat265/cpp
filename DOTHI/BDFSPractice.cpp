#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"
	
int n,m;
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
char a[1001][1001];
bool visited[1001][1001];

void dfs(int i, int j) {
	cout << i <<  " " << j << endl;
	a[i][j] = 'o';
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <=m && a[i1][j1] == 'x') {
			dfs(i1,j1);
		}
	}
}

void bfs(int i, int j) {
	queue<pair<int,int>> q;
	q.push({i,j});
	a[i][j] = 'o';
	while (!q.empty()) {
		pair<int,int> top = q.front();
		q.pop();
		cout << top.first << " " << top.second << endl;
		for (int k = 0; k < 4; k++) {
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if (i1 >= 1 && i1 <= n && j1 >= 1 && i1 <=m && a[i1][j1] == 'x') {
				q.push({i1,j1});
				a[i1][j1] = 'o';
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	memset(visited, false, sizeof(false));
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == 'x') {
				cout << "TPLThong thu " << cnt + 1 << ": \n";
				dfs(i,j);
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}

