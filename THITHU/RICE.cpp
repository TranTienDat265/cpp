#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "RICE"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 1e5 + 1;
const int MOD = 1e9 + 7;

ll n,m,x,y,r;

void inp() {
	cin >> n >> m >> x >> y >> r;
}

void solve() {
	ll node = n * m;
	vector<ll> a;
	vector<ll> b;
	int cnt = 0;
	for (int i = 0 ; i < n; i++) {
		int tmp; cin >> tmp;
		if ((x-tmp)*(x-tmp) <= r*r) a.push_back(tmp);
	}
	for (int i = 0 ; i < m; i++) {
		int tmp; cin >> tmp;
		if ((y-tmp)*(y-tmp) <= r*r) b.push_back(tmp);
	}
	for (ll i : a) {
		for (ll j : b) {
			if ((i - x)*(i - x) + (j - y)*(j - y) <=  r*r) cnt++;
		}
	}
	cout << abs(node-2LL*cnt);
}	

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	// (x-a)^2 + (b-3)^2 = R^2;
	inp();
	solve();
	return 0;
}


