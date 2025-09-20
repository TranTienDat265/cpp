#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int m = 4;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j <= i) cout <<"*";
			else cout << "~";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j > n - i + 1) cout << "~";
			else cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n + i; j++) {
			if (j > i - 1) cout << "*";
			else cout << "~";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j < n - i + 1) cout << "~";
			else if (j == n || j == n - i + 1 || i == n) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	return 0;
}

