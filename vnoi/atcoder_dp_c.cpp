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
const int N = (int) 1e5 + 1;
const int MOD = (int) 1e9 + 7;

int dp[N][3] = {0};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n,a,b,c; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b >>  c;
//		cout << a << " " << b << " " << c << endl;
		dp[i][0] = max(dp[i-1][1] + a,dp[i-1][2]+a);
		dp[i][1] = max(dp[i-1][0] + b,dp[i-1][2]+b);
		dp[i][2] = max(dp[i-1][0] + c,dp[i-1][1]+c);
	}
	cout << max({dp[n][0],dp[n][1],dp[n][2]});
	return 0;
}

/*
3
10 40 70
20 50 80
30 60 90
*/


