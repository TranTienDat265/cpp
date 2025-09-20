#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "DOCAO"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

int p[maxn + 3], n, h, cnt;

void init() {
	fill(p, p + maxn + 1, 1);
	p[0] = p[1] = 0;
	for (int i = 2; i*i <= maxn;i++) {
		if (p[i])
		for (int j = i * i; j <= maxn; j += i) {
			p[j] = 0;
		}
	}
}

int tong(int n) {
	int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	init();
	cin >> n >> h;
	for (int i = 0; i <= n; i++) {
		if (p[i] && tong(i) == h) {
			cnt++;
			cout << i << endl;
		}
	}
	cout << cnt;
	return 0;
}




