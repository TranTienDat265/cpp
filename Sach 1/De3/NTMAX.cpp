#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "NTMAX"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 5e6 + 1;
const int MOD = (int) 1e9 + 7;

bool p[maxn];
string s;
int pmax = 0, n = 0;

void seive() {
	memset(p,true,sizeof(p));
	p[0] = p[1] = 0;
	for (int i = 2; i * i <= maxn; i++) {
		if (p[i]) {
			for (int j = i * i; j <= maxn; j+= i) {
				p[j] = false;
			}
		}
	}
}

void solve() {
	getline(cin, s);
	s += " ";
	int dem = 0;
	for (auto x : s) {
		if ('0' <= x && x <= '9') {
			dem++;
			n = n* 10 + (x - 48);
		}
		else {
			if (p[n]) pmax = max(pmax,n);
			n = 0;
		}
	}
	cout << dem << "\n" << pmax;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	seive();
	solve();
	return 0;
}




