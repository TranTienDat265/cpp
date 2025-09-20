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
const int maxn = (int) 1e7 + 1;
const int MOD = (int) 1e9 + 7;

int n, a[maxn];
map<ll,bool>mp;

void Task() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]] = true;
	}
}

void solve() {
	for (int i = 0; i < n; i++) {
		if (mp[i]) {
			cout << i << " ";
		}
		else cout << "-1 ";
	}
	cout << endl;
	mp.clear();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
//	int t = 1;
	while (t--) {
		Task();
		solve();
	}
	return 0;
}
//2
//10
//-1 -1 6 1 9 3 2 -1 4 -1
//6
//0 -3 1 -2 3 -4



