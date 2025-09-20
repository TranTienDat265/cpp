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
int cnt[maxn];

void solve(){
	int n; cin >> n;
	memset(cnt,0,sizeof(cnt));
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x > 0) cnt[x] = 1;
	}
	for (int i = 1; i <= (int)1e6; i++) {
		if (!cnt[i]) {
			cout << i << endl;
			return;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin>> t;
	while(t--) {
		solve();
	}
	
	return 0;
}

//2
//5
//1 2 3 4 5 
//5
//0 -10 1 3 -20


