#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	double ans = 1 - 1 / (float(n) + 1);
	cout << setprecision(2) << fixed << ans;
	return 0;
}

