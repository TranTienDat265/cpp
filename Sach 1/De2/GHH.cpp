#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "GHH"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front

#define fi first
#define se second
#define endl "\n"
const int maxn = int(1e6+1);
const int MOD = (int) 1e9 + 7;

ll c[maxn + 6],a[maxn];
int n;

void seive() {
	fill(c + 1, c + maxn + 1, 1);
	for (int i = 2; i * i <= maxn; i++) {
		for (int j = i*i; j <= maxn; j+=i) {
			c[j] += i;
			if (j / i != i) c[j] += j / i;
		}
	}
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (c[x] >= x) cout << "1\n";
		else cout << "0\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	seive();
	solve();
	return 0;
}




