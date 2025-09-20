#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "CAU1"

int countgcd(int n) {
	if (n == 1) return 1;
	int ans = 2;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			ans += 1;
			if (n / i != i) ans += 1;
		}
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	int x,y;
	cin >> x >> y;
	int ucln = __gcd(x,y);
	cout << countgcd(ucln);
	return 0;
}
