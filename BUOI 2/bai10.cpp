#include <iostream>
using namespace std;

int main() {
	int d1,d2,d3;
	cin >> d1>>d2>>d3;
	int ans = min(d1,d2)+min(d3,d1+d2); 
	if (d1<d2) ans += min(d2,d1+d3);
	else ans +=min(d1,d2+d3);
	cout << ans;
	return 0;
}

