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

ull n, r, l;
vector<ull> numb;

void pttsnt(ull n) {
	for (int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			n /= i;
			numb.pb(i);
		}
	}
	if (n > 1) numb.pb(n);
//	for (ull x : numb) cout << x << " ";
}

void solve() {
	cin >> n;
	ull m = n * 2;
	pttsnt(n * 2);
	int len = numb.size();
	if (len == 1) cout << "-1";
	else  {
		//[0;n/2-1]U[n/2;n-1]
		ull a = 1, b = 1;
		for (int i =0; i <= len / 2 - 1; i++) {
			a *= numb[i];
		}
		b = m / a;
		cout << a << " " << b << endl;
//		if (b == a) {
//			l = (a + b - 1) / 2;
//			r = a + l - 1;
//		}
//		else if (b > a) {
//			
//		}
		r = (a+b-1) / 2;
		l = r - a;
		cout << r - a << " " << r;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);

	solve();
	return 0;
}




