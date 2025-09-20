#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOTHI"
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
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	for (int i = 1; i <= 9;i++) {
		for (int j = i + 1; j <= 10; j++) {
			cout << i << " " << j << endl;
		}
	}
	return 0;
}




