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
int n, k;
int curSum = 0;
vector<int> res;//curmoneySet
int a[15] = {0, 10,20,50};

void printSubset() {
	for (int x : res) cout << x << " ";
	cout << endl;
}

void printMoney() {
	for (int x : res) cout << a[x] << " "; cout << endl;
}

void backtrack(int pos) {
	int lastNum = (res.empty() ? 0 : res.back());
	for (int i = lastNum + 1; i <= n; i++) {
		res.push_back(i);
		if (res.size() == k) printSubset();
		else backtrack(pos+1);
		res.pop_back();
	}
}

void backtrack_money() {
	int lastIndex = (res.empty() ? 1 : res.back());
	for (int i = lastIndex; i <= n; i++) {
		res.push_back(i);
		curSum += a[i];
		if (curSum >= k) {
			if (curSum == k) printMoney();
		}
		else backtrack_money();
		res.pop_back();
		curSum -= a[i];
	}
}

int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	cin >> n >> k;	
	n = 3, k = 100;
	res.clear();
	backtrack_money();
	return 0;
}




