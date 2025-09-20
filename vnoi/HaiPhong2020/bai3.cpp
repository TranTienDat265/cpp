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

int a[maxn], n, k;
map<int,int> mp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	for (int i = 1; i<=n;i++) {
		cin >> a[i];
		if (mp[2*k-a[i]]) {
			cout << mp[2*k-a[i]] << " " << i;
			return 0;
		}
		mp[a[i]] = i;
	}
	cout << "0 0";
	return 0;
}




