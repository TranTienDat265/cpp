#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "SEIVE"
int p[10003];
void seive() {
	for (int i = 0; i <= 10003; i++) p[i] = 1;
	
	p[0] = 0; p[1] = 0;
	for (int i = 2; i <= sqrt(10003); i++) {
		if (p[i]) {
			for (int j = i * i; j <= 10003; j+=i) p[j] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	int n;
	int a[10001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	seive();
	for (int  i = 0; i < n; i++) {
		if (p[a[i]]) cout << a[i] << " ";
	}
	
	return 0;
}

