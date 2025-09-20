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

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return (a * b) / gcd(a, b);
}

ll count(ll a, ll b, ll x) {
	return (b / x) - (a - 1) / x;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll a,b,x,y;
	cin >> a >> b >> x >> y;
	cout << count(a,b,x) + count(a,b,y) - count(a,b,lcm(x,y));
	return 0;
}
// 3 5 6 9 10 12 15 18 20 21 24 25 27 30
// 3 5 6 9 10 12 15
//18 20 21 24 25 27 30



