#include <iostream>
using namespace std;

int main() {
	char a;
	cin >> a;
	if (a>=97 and a<=122) a = a - 32;
	cout << a;
	return 0;
}

