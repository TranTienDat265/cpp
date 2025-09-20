#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int c;
	cin >> c;
	double ans = (float) c *9/5 + 32;
	cout << setprecision(2) << fixed << ans;
	return 0; 
}

