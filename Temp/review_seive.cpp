#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define N 1000000

long long p[100000];

void seive() {
	for (int i = 0; i <= N; i++) {
		p[i] = 1;
	}
	p[0]=p[1]=0;
	for (int i = 2; i <= N; i++) {
		if (p[i]) {
			for (int j = i*i; j <= N; j += i) {
				p[j] = 0;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	seive();
	for (int i = 0; i <= 1000; i++){
		if (p[i]) cout << i << " ";
	}
	return 0;
}

