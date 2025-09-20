#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a,b,k;
	cin >> a>>b>>k;
	int steps = abs(a) + abs(b);
	if ((steps - k) % 2 == 0 && k >=steps) cout <<"Yes";
	else cout << "No";
	return 0;
}

