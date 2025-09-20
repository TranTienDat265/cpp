#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "SYM"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	getline(cin, s);
	int n = s.size();
	s = " " + s;
//	cout << s << endl;
	vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
//	for (int i = 1; i <= n; i++) dp[i][i] = 0;
	for (int len = 2; len <= n; len++) {
		for (int i = 1; i <= n - len + 1; i++) {
			int j = i + len - 1;
			if (s[i] == s[j]) dp[i][j] = dp[i+1][j-1];
			else {
				dp[i][j] = min(dp[i+1][j], dp[i][j-1]) + 1;
			}
		}
	}
	int l = 1, r = n;
	string ls ="", rs="";
	while (l<=r) {
		if (s[l] == s[r]) {
			ls += s[l];
			rs = s[r] + rs;
			l++; r--;
		}
		else if (dp[l][r] == dp[l+1][r] + 1) {
			ls += s[l];
			rs = s[l] + rs;
			l++;
		}
		else  {
			ls += s[r];
			rs = s[r] + rs;
			r--;
		}
	}
	string ans = ls + rs;
	if (ans.size() % 2 == 0 && (ans[ans.size() / 2] == ans[ans.size() / 2 - 1])) {
		ans.erase(ans.size() / 2,1);
	}
	cout << ans;
	
	return 0;
}




