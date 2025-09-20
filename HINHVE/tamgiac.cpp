#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i <= 4; i++) {
		for (int j = 1; j <= i*2+1;j++) cout << "*";
		cout << endl;
	}
	for (int i = 0; i <= 4; i++) {
		for (int j = (4-i)*2+1; j >= 1;j--) cout << "*";
		cout << endl;
	}
	return 0;
}

