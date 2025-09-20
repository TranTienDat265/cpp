#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int s;
	for(int i = 1; i <= n; i++) {
		s += i*2;
	}
//	s = (n+1)*n;
	cout << s;
	return 0;
}

