#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
using ll = long long;
int n, q,t[100001] ;
ll a[100001], x[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> t[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++) cin >> x[i];
	long long val[2] = {0, 0};
	bool check[2] = {false,false};
	for (int i = 0; i < n; i++) {
		if (t[i] == 2) {
			if(!check[0]) val[0] = a[i];
			else {
				if (val[0] <= a[i]) val[0] = a[i];
			}
			if (val[1] <= a[i]) val[1] = a[i];
		}
		else if (t[i] == 3) {
			if(!check[1]) val[1] = a[i];
			else {
				if (val[1] >= a[i]) val[1] = a[i];
			}
			if (val[0] >= a[i]) val[0] = a[i];
		}
		else if (t[i] == 1) {
			val[0] += a[i];
			val[1] += a[i];
		}
	}

	for (int i = 0; i < q; i++) {
		for (int j = 0; j < n; j++) {
			if (t[j] == 1) x[i] += a[j];
			else if (t[j] == 2) {
				if (x[i] <= a[j]) {
					cout << val[0] << endl;
					break;
				}
			}
			else if (t[j] == 3) {
				if (x[i] >= a[j]) {
					cout << val[1] << endl;
					break;
				}
			}
			if (j == n - 1) cout << x[i] << endl;
		}
	}
	return 0;
}
//4
//5 2
//7 3
//8 2
//-1 3
//6
//-2 5 1 0 19 9


