#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double pi = 3.14;
	int r;
	cin >> r;
	cout <<setprecision(2) << fixed<< 2*r*pi << " " << r*r*pi;
	return 0; 
}

