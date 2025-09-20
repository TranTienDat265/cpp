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
	ll cnt = 0;
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int maxb = (n - 1) / i;
		cnt += maxb;
	}
	cout << cnt;
	return 0;
}




