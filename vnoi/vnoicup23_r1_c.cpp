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
const int maxn = (int) 1e5 + 1;
const int MOD = (int) 1e9 + 7;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<int> a;
	vector<int> b;
	int t; cin >> t;
	while(t--) {
		int n;
		ll s = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int x; cin >> x; a.push_back(x);
		}
		for (int i = 0; i < n; i++) {
			int x; cin >> x; b.push_back(x);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(), greater<int>());
		for (int i = 0; i < n; i++) {
			s += max(a[i],b[i]);
		}
		cout << s << endl;
		a.clear();
		b.clear();
	}
	return 0;
}




