#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

bool f[1001][1001];
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	getline(cin, s);
	int n = s.size();
	s = " " + s;
	for (int i = 1; i<=n;i++) f[i][i] = true;
	int ans = 1;
	for (int len = 2; len <= n; len++) {
		for (int i =  1; i <= n - len + 1; i++) {
			int j = i + len - 1;
			if (len == 2 && s[i] == s[j]) f[i][j] = true;
			else  {
				f[i][j] = f[i+1][j-1] && (s[i] == s[j]);
			}
			if (f[i][j]) ans = max(len,ans);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	cout << ans;
	return 0;
}




