#include <iostream>
using namespace std;

int main() {
	long long a,b,c,d,e;
	cin >>a>>b>>c>>d>>e;
	long long min = LLONG_MAX;
	long long min2 = min;
	if (a < min) {
		min2 = min;
		min = a;
	}
	if (b < min) {
		min2 = min;
		min = b;
	}
	if (c < min) {
		min2 = min;
		min = c;
	}
	if (d < min) {
		min2 = min;
		min = d;
	}
	if (e < min) {
		min2 = min;
		min = e;
	}
	cout << min2;
	return 0;
}

