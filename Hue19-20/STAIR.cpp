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
const int maxn = (int) 1e5 + 1;
const int MOD = (int) 1e9 + 7;

bool p[maxn];
int n;

void seive() {
	memset(p,true,sizeof(p));
	p[0] = p[1] = false;
	for (int i = 2; i * i <= n; i++) {
		if (p[i]) {
			for (int j = i * i; j <= n; j+= i) {
				p[j] = false;
			}
		}
	}
}

void work(int n) {
	if (p[n]) return;
	p[n] = true;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			work(i);
			if (n / i != i) {
				work(n / i);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	cin >> n;
//	cout << p[7] << endl;
	seive();
	work(n);
	p[n] = true;
	for (int i = n; i >= 1; i--) {
		if (p[i]) cout << i << " ";
	}
	return 0;
}




