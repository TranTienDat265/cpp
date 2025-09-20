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

int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};
int n,m;
char a[1001][1001];

void inp() {
	cin >>  n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
}

void dfs(int i,int j) {
	cout << i <<  " " << j << endl;
	a[i][j] = 'o';
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'x') {
			dfs(i1,j1);
		}
	}
}


void cntCCP(){
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == 'x') {
				dfs(i,j);
				cnt++;
				cout << endl;
			}
		}
	}
	cout << cnt << endl;
}




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	cntCCP();
	return 0;
}
//6 6
//Aooxoo
//oxoooo
//oxoooo
//ooooxx
//Boooxo
//oooxxx

//count connected component
//6 6
//xooxoo
//oxoooo
//oxoooo
//ooooxx
//ooooxo
//oooxxx



