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

bool isOk(ull n) {
	ull sqr = sqrt(n);
	return (sqr*sqr == n) && (sqr % 2 == 0);
}

void solve() {
	ull n; cin >> n;
	int cnt = 0;
	ull x = 4;
	for (ull i = 2; i*i*(i + 2)*(i + 2) <= n; i += 2){
		x = n / (i * i);
		x = sqrt(x);
		if (x*x*i*i == n) cnt+=2;
 	}
	cout << cnt << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
//	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}

