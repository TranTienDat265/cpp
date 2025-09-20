#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	int a,b,c;
	cin >> a>> b>> c;
	if (a == 0) {
		if (b == 0 && c == 0) cout <<"INF";
		else if (b == 0 && c != 0) cout << "NO";
		else if (b != 0) {
			cout << setprecision << fixed << 1.0 * -c / b;
		}
	}
	else {
		double delta = (float)b*b-4*a*c;
		if (delta < 0) cout << "NO";
		else {
			double x1 = (-1.0 * b + sqrt(delta))/(2*a);
			double x2 = (-1.0 * b - sqrt(delta))/(2*a);
			cout << setprecision(2) << fixed <<  x1 << " " << x2;
		}
	}
	
	return 0; 
}

