#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define maxN 1000001

int n, a[200020];

void input(){
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void solve() {
	vector<int> ans;
	ans.push_back(a[0]);
	for (int i = 1; i < n; i++) {
		if (ans.back() < a[i]) {
			ans.push_back(a[i]);
		}
		else {
			int low = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
			ans[low] = a[i];
		}
	}
	cout << ans.size();
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	input();
	solve();
	return 0;
}
