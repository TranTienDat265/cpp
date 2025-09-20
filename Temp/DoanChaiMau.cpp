#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""

bool check(int inp[], int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (inp[i] == a[i]) dem++;
	}
	cout << dem << endl;
	if (dem == n) return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	int n;
	cin >> n;
	int a[n + 1];
	// random() 
	int j = 0;
	int mark[n] = {0};
	while (j < n) {
		int x = rand() % n + 1;
		if (mark[x] == 0) {
			a[j] = x;
			j++;
			mark[x]++;
		}	
	}
//	for (int i = 0; i < n; i++) {
//	cout << a[i] << " ";
//	}
//	int inp[n + 1];
//	cout << "Nhap du doan: ";
//	for (int i = 0; i < n; i++) {
//		cin >> inp[i];
//	}
//	while (!check(inp, a, n)) {
//		cout << "Nhap lai: ";
//		for (int i = 0; i < n; i++) {
//			cin >> inp[i];
//		}
//	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

