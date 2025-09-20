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

ll n, a[maxn];

void lis() {
	vector<ll> ans;
	ans.push_back(a[0]);
	for (int i = 1; i < n; i++) {
		if(a[i] > ans.back()) {
			ans.push_back(a[i]);
		}
		else {
			int x = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
			ans[x] = a[i];
		}
 	}
 	cout << ans.size() << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	lis();
	return 0;
}




