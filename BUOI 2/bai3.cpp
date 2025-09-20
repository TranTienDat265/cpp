#include <iostream>
using namespace std;

int main() {
	long long m,n,a;
	cin >>m>>n>>a;
	long long x;
	if (m % a == 0) x = m/a;
	else x = m/a + 1;
	long long y;
	if (n % a == 0) y = n/a;
	else y = n/a + 1;
	cout << x*y; 
	return 0;
}

