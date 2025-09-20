#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "SDB"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

int a[maxn];
vector<int> res;
unordered_map<int,int> mp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if (mp[a[i]] == 1) res.pb(a[i]);
	}
	cout << res.size() << endl;
	for (auto it : res) cout << it << endl;
	return 0;
}




