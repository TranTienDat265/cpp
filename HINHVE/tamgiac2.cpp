#include <iostream>
using namespace std;

int main() {
	int n =  5;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == 1 || i == n || j == 1 || j == i) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n + i - 1; j++) {
			if (j < n - i + 1) cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n + i - 1; j++) {
			if (j == n - i + 1 || j == n + i - 1 || i == n) cout << "*";
			else cout << " "; 
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) cout << " ";
		for (int j = 1; j <= 2*i-1; j++) {
			if (j == 1 || j == 2*i-1 || i == 5) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * n - i; j++) {
			if (j > i - 1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	return 0;
}

