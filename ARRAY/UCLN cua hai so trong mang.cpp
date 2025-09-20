#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second

int n, a[1001];
map<int,int>mp;
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

void findDiv(int n) {
	for (int i = 1; i <= sqrt(n);i++) {
		if (n % i == 0) {
			mp[i]++;
			if (n / i != i) mp[n / i]++;
		}
	}
}

void inp() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void solve() {
	
	for (int i = 0; i < n; i++) {
		findDiv(a[i]);
	}
	int res = 1;
	for (auto it : mp) {
		if (it.se >= 2) {
			res = it.fi;
		}
	}
	cout << res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	int t; cin >> t;
	while (t--) {
		inp();
		solve();
	}
	return 0;
}
//1
//10
//2 3 1 4 5 7 14 3 5 10

