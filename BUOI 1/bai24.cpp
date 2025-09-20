#include <iostream>
using namespace std;

int main() {
	char a;
	cin >> a;
	if (a == 122 or a == 90) a = 97;
	else if (a >= 65 and a <= 90) a = a + 33;
	else if (a >= 97 and a <= 122) a = a + 1;
	else {
		cout << "INVALID";
		return 0;
	}
	cout << a;
	return 0;
}

