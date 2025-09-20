#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
	cout.tie(0);
	long long n,k,w;
	cin >> k >> n >> w;
	long long s = k*(w+1)*w/2;
	if (s < n) cout << 0;
	else cout << s - n;
	return 0;
}

