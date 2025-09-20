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

bool isSquare(ull n) {
	ull sqr = sqrt(n);
	return (sqr*sqr == n);
}

ull gcd(ll a, ll b) {
	while (b != 0) {
		ull r = a % b;
		a = b;
		b = r;
	}
	return a;
}

ull lcm(ll a, ll b) {
	return (a * b) / gcd(a,b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ull a,b,c; cin >> a >> b >> c;
	ull lcmm = lcm(a,lcm(b,c));
	ull ans = lcmm;
	while (!isSquare(ans)) {
		ans += lcmm;
	}
	ans = sqrt(ans);
	cout << ans;
	return 0;
}




