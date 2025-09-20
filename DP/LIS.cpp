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


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
	int f[1001], a[1001];
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	fill(f + 1, f + n + 1, 1);
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (a[j] < a[i]) {
				f[i] = max(f[i], f[j] + 1);
			}
		}
	}
	cout << f[n];
	return 0;
}
// 7
// 1 2 3 1 4 8 5




