#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "MESSAGES"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 1e2 + 1;
const int MOD = 1e9 + 7;

ll n,m,a[maxn][maxn],f[maxn][maxn];

void inp() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			f[i][j] = 1LL * 1e9;
		}
	}
}

void print() {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			cout << f[i][j] <<  " ";
		}
		cout << endl;
	}
	cout << "--------------------------------------\n";
}

void solve() {
	print();
	for (int i = 1; i <= n; i++) {
		f[i][1] = a[i][1];
		for (int j = 2; j <= m; j++) {
			for (int k = 0; k <= i; k++) {
				if (f[i][j] > f[k][j-1] + a[i-k][j]) {
					f[i][j] = f[k][j-1] + a[i-k][j];
					print();
				}
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
	inp();
	solve();
	return 0;
}



