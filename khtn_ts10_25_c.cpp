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
const int N = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

int n;
int a[N];

void nhap() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
}

void giai() {
	map<int,int> mp;
	int res = 1e9;
	for (int i = 1; i <= n; i++) {
		if (mp.count(a[i])) {
			res = min(res, i - mp[a[i]]);
		}
		mp[a[i]] = i;
	}
	cout << res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	giai();
	return 0;
}




