#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	if (a%b == 0) cout << a;
	else {
		cout << (a / b + 1) * b;
	}
	return 0;
}

