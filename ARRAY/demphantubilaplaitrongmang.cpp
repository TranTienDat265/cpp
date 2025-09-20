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

int cnt[maxn], a[maxn];

void solve() {
	memset(cnt,0,sizeof(cnt));
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	} 
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (cnt[a[i]] >= 2) {
			ans += cnt[a[i]];
			cnt[a[i]] = 0;
		}
	}
	cout << ans << endl;
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

//2
//5
//4 5 1 2 1
//6
//10 20 30 30 20 5




