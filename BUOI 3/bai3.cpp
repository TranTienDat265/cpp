#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long s = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0) s += i;
	}
//	s = 3*(n / 3+1)*(n / 3)/2;
	cout << s;
	return 0;
}

