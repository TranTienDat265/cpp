#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""

int length(int n) {
	int dem = 0;
	while (n > 0) {
		dem += 1;
		n /= 10;
	}
	return dem;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int a, b;
	cin >> a >> b;
	int p[10001];
	int i = 0;
//	int m = n;
	int length_a = length(a);
	cout << length_a << endl;
	int pow = 1;
	for (int i  = 1; i< length_a; i++) {
		pow *= 10;
	}
	cout << pow;
	int first =  a / pow;
	int length_b = length(b);
	while (p[i] <= b) {
		a[i + 1] = 
	}
	
	return 0;
}

