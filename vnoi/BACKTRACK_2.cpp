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

vector<int> res;
int n, sum = 0;

void printSubset() {
	for (int x : res) cout << x << " ";
	cout << endl;
}

void backtrack() {
	int lastNum = (res.empty() ? 1 : res.back());
	for (int i = lastNum; i <= n; i++) {
		res.push_back(i);
		sum += i;
//		cout << sum << endl;
//		printSubset();
		if (sum >= n) {
			if (sum == n) printSubset();
		}
		else backtrack();
		res.pop_back();
		sum -= i;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	n = 7;
	backtrack();
	return 0;
}




