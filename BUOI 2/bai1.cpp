#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double s1,s2,s3;
	cin >> s1>>s2>>s3;
	double a = sqrt(s1*s2/s3);
	double b = sqrt(s2*s3/s1);
	double c = sqrt(s1*s3/s2);
	cout << (a+b+c)*4;
	return 0;
}

