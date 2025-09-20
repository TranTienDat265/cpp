#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "STRING"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 4e5 + 1;
const int MOD = 1e9 + 7;

int cnt[26];

void solve() {
	string s1; string s2;
	getline(cin,s1);
	getline(cin,s2);
//	cout << s1 << " " << s2 << endl;
	int n = s1.size();
	memset(cnt,0,sizeof(cnt));
	for (int i = 0; i < n; i++) {
		if (s1[i] != s2[i]) {
//			cout << s1[i] << " " << s2[i] << endl;
//			cout << s2[i] - 'a' << " " << cnt[s1[i] - 'a'] << endl ;
			if (cnt[s2[i] - 'a'] <= 0) {
				cout << "no\n";
				return;
			}
		}
		cnt[s1[i] - 'a']++;
	}
	cout << "yes\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		solve();
	}
	return 0;
}


