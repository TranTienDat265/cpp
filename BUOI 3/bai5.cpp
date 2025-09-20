#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	double s = 0;
	for (int i = 1; i <= n; i++) {
		s += 1/(float)2*i;
		cout << s << endl;
	}
	cout << fixed << setprecision(3) << s;
	return 0;
}

