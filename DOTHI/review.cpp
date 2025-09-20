#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
char a[101][101];
int n,m;
void dfs(int i, int j) {
	cout << i << " " << j << endl;
	a[i][j] = 'o';
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1] == 'x') {
			dfs(i1,j1);	
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
	for (int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for (int i = 1; i<=n;i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == 'x') {
				cnt++;
				cout << "Thanh phan lien thong thu " << cnt << ": " << endl;
				dfs(i,j);
			}
		}
	}
	cout << cnt;
	return 0;
}

