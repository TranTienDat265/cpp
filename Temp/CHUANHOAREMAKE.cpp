#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
using ll = long long;
long long x[100001], a[100001] ;
int t[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> t[i];
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> x[i];
	}
	sort(x, x + q);
	for (int i = 0; i < n; i++) {
		if (t[i] == 1) for (int j = 0; j < q; j++) x[j] += a[i];
		else if (t[i] == 2) {
			for (int j = 0; j < q; j++) {
				if (x[j] <= a[i]) x[j] = a[i];
				else break;
			}
		}
		else if (t[i] == 3) {
			for (int j = q - 1; j >= 0; j--) {
				if (x[j] >= a[i]) x[j] = a[i];
				else break;
			}
		}
	}
	for (int i = 0; i < q; i++) cout << x[i] << endl;
	return 0;
}

