#include <iostream>
using namespace std;

int main() {
	char a;
	cin >> a;
	if (a>=65 and a<=90) a = a + 32;
	cout << a;
	return 0;
}

