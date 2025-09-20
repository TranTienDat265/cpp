#include <bits/stdc++.h>
using namespace std;
const int Mxn = 2e5 + 7;
const int MOD = 1e9 + 7;
int n, target;
vector<int> dp(Mxn);
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> n;
    target = n * (n + 1) / 2;
    if(target % 2) {
    	cout << 0;
    	return 0;
	}
	target /= 2;
	dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = target; j >= i; --j) {
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        }
    }
    cout << (dp[target] / 2);
	return 0;
}
