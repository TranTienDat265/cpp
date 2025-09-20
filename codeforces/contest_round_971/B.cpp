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


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--) {	
		int n; cin >> n;
		 string res = "";
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= 4; j++) {
				char s; cin >> s;
				if (s == '#') {
					res = to_string(j) + " " + res;
				}
			}	
		}
		cout << res << endl;
	}
	return 0;
}




