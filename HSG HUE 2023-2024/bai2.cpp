#include <bits/stdc++.h>
#define TASKNAME "MS"
using namespace std;

int n;
int f[] = {2,3,5,7,11,13,19,23,29,31};
long long res = 1e18;

void Try(int i, long long ans, long long uoc) {
	if (uoc > n) return;
	if (uoc == n) res = min(res, ans);
	for (int j = 1;;j++) {
		if (ans * f[i] > res) break;
		ans *= f[i];
		Try(i+1, ans, uoc*(j+1));
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	cin >> n;
	Try(0,1,1);
	cout << res;
	
	return 0;
}


