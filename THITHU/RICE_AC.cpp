#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "RICE"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

ll n,m,x,y,r;

void solve() {
	cin >> n >> m >> x >> y >> r;
	int a[n + 1], b[n + 1];
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) cin >> b[i];
	sort(b+1, b+m+1);
	ll cnt = 0;
	for (int i = 1; i <= n; i++) {
		if ((a[i] - x)  * (a[i] - x) <= r*r) {
			ll k = sqrt(r*r - (a[i] - x) * (a[i] - x));
			ll c = -k + y;
			ll d = k + y;
			ll j1 = lower_bound(b+1, b+m+1, c) - b;
			ll j2 = upper_bound(b+1, b+m+1, d) - b;
			cout << j1 << " " << j2 << endl;
			if(j1<=j2) cnt+=j2-j1;
		}
	}
	cout << abs(n*m-2*cnt);
}

void solve1() {
	cin >> n >> m >> x >> y >> r;
	vector<ll> a(n);
	vector<ll> b(m + 1);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m + 1; i++) cin >> b[i];
	sort(b.begin(), b.end());
	for (int j  : a ) cout << j << " ";
	cout << endl;
	for (int j : b) cout << j << " ";
	cout << endl;
	ll cnt = 0;
	for (int i = 0; i < n; i++) {
		if ((a[i] - x)  * (a[i] - x) <= r*r) {
			ll k = sqrt(r*r - (a[i] - x) * (a[i] - x));
			ll c = -k + y;
			ll d = k + y;
			ll j1 = lower_bound(b.begin(), b.end(), c) - b.begin();
			ll j2 = upper_bound(b.begin(), b.end(), d) - b.begin();
			cout << j1 << " " << j2 << endl;
			if(j1<=j2) cnt+=j2-j1;
		}
	}
	cout << abs(n*m-2*cnt);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	solve1();
	return 0;
}




