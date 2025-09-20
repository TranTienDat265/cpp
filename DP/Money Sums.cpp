#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second

int a[101], n, s;
bool dp[100001];

void inp() {
	cin >> n;
	s = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s += a[i];
	}
	memset(dp,false,sizeof(dp));
}

void solve(){
	dp[0] = true;
	vector<int> ans;
	for (int i = 1; i <= n; i++) {
		for (int j = s; j >= a[i]; j--) {
			if (dp[j-a[i]]) {
				dp[j] = true;
				
			}
		}
	}
	for (int i = 1; i <= 100000; i++) {
		if (dp[i]) ans.push_back(i);
	}
	cout << ans.size() << endl;
	for (int x : ans) cout << x << " ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	solve();
	return 0;
}

//Money Sums
