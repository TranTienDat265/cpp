#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

int x[1001],n;

void print() {
	for (int i = 1; i <= n; i++) cout << x[i];
	cout << endl;
}

void Try(int i) {
	for (int j = 0; j <= 1; j++) {
		x[i] = j;
		if (i == n) print();
		else Try(i + 1);
	} 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	Try(1);
	
	return 0;
}




