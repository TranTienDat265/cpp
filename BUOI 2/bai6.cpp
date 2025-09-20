#include <iostream>
using namespace std;

int main() {
	long long n,a,b;
//	if (n % 2 == 0) {
//		if (a * 2 < b) cout << a * n; 
//		else cout << b * n / 2;
//	}
//	else {
//		if (a * 2 < b) cout << a * n;
//		else cout << b * n / 2 + a;
//	}
	if (a*2 <=b) cout <<n * a;
	else cout << b * n / 2 + (n%2)*a;
	return 0;
}

