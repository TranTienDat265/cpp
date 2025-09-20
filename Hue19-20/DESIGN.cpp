#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DESIGN"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

int n;
string curString;
char a[2] = {'b','w'};

void sinh(int pos) {
	if (pos > n) {
		cout << curString <<  endl;
		return;
	}
	for (int i = 0 ; i <= 1; i++) {
		curString += a[i];
		sinh(pos + 1);
		curString.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	curString = "";
	cin >> n;
	sinh(1);
	ll ans = 1LL * pow(2,n);
	cout << ans;
	return 0;
}




