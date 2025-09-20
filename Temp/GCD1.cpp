#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define fi first
#define se second

ll gcd(ll a, ll b) {
	while (b != 0) {
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}
ll gcdd(ll a, ll b) {
	if (b == 0) return a;
	return gcdd(b, a % b);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	cout << gcdd(12, 6);
	return 0;
}


