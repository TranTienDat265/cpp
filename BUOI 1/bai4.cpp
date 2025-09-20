#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	long long tong = a + b;
	int hieu = a - b;
	float thuong = (float)a / b;
	long long tich = a * b;
	cout << setprecision(2) << fixed << tong << " " << tich << " " << hieu << " " << thuong;
	return 0; 
}

