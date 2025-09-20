#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "XAYTHAP"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int N = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

int n;
int a[N];

void nhap() {
	freopen(TASKNAME".INP", "r", stdin);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];	
}

bool cmp(int a, int b){
	return abs(a) > abs(b);
}

void giai() {
	freopen(TASKNAME".OUT", "w", stdout);
	sort(a, a + n, cmp);
//	for (int i = 0; i < n; i++) cout << a[i] << " ";
//	cout << endl;
	int cnt = 1, l = 1;
	int pre = (a[l] < 0) ? -1 : 1;
	while (l < n- 1) {
		ll dau = 1LL * pre * a[l] % MOD;
		if (dau < 0) {
			cnt++;
			pre = (a[l] < 0) ? -1 : 1;
//			cout << pre << " " << a[l] << endl;	
		}
		l++;
	}
	cout << cnt;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	giai();
	return 0;
}




