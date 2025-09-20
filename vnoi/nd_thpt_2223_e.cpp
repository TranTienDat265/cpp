#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "CSBN"
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
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	int n; cin >> n;
	map<int,int> mp;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		mp[x]++;
	}
	ll ans = 0;
	for (auto it : mp) {
		int k = it.se;
		ans += 1LL * k * (k - 1) / 2;
	}
	cout << ans;
	return 0;
}




