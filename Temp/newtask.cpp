#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""

int length(int n) {
	int dem = 0;
	while (n != 0) {
		dem = dem + 1;
		n  /= 10;
	}
	return dem;
}

bool ok(int n) {
	int len = length(n) - 1;
	int a = (n % 100) / 10;
	int b = (n / (int)pow(10,len - 1) ) % 10 ;
	cout << n % 10<<  " " << n / (int) pow(10, len) << endl;
	bool a1 = 
	bool a2 =
	bo
	if (n % 10 == n / (int)pow(10, len) and (n % 100) / 10 - n % 10 >= 2 and (n / (int)pow(10,len - 1) ) % 10 - n / pow(10,len) >= 2){
		return true;
	} 
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout << ok(1331);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
//	cout << pow(2,3);
	return 0;
}

