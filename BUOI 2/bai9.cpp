#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	if (n < m) cout << "-1";
	else {
		int x  = n / 2;
		if (x * 2 == n) {
			if (x % m == 0) cout << x;
			else cout << x  + (m - x % m);
		}
		else {
			cout << x + (m - x % m);
		}
	}
	return 0;
}

