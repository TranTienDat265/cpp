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
int ma = INT_MIN, mi = INT_MAX;

void nhap() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x,y; cin >> x >> y;
		ma = max(ma,x+y);
		mi = min(mi,x+y);
	}
}

void giai() {
	cout << ma - mi;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	giai();
	return 0;
}




