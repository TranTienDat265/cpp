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

int n,m,a[maxn];

void inp() {
	cin >> n >> m;
	for (int i = 0;i<n;i++) {
		cin >> a[i];
	}
}

void solve() {
	for (int i = 1; i < n - 1; i++) {
		if (m == a[i]) {
			cout << i + 1; return;
		}
		else if(m > a[i - 1] && a[i] < a[i + 1]) {
			cout << 
		} 
	}
	cout << n + 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	inp();
	solve();
	return 0;
}
//https://oj.vnoi.info/problem/fcb050_camping




