#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int m = 4;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == m || j == 1 || j == n) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	return 0;
}

