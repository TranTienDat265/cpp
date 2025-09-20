#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double a,b;
	cin >> a >> b;
	int a1 = ceil(a);
	int b1 = floor(b);
	cout << b1 - a1 + 1;
	return 0;
}

