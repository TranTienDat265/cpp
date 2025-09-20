#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long s = 0;
	for (int i = 1; i <= n; i++) {
		s += i*i;
	}
	cout << s;
	return 0;
}

