#include <iostream>
using namespace std;

int main() {
	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = n - i + 1; j >= 1;j--) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <=n; j++) {
			if (j >= n - i + 1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j >= i) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	return 0;
}

