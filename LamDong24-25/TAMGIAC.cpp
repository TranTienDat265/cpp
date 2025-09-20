#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "TAMGIAC"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int N = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

double a[2],b[2],c[2],m[2];

double dientich(double xa, double ya, double xb, double yb, double xc, double yc) {
	return fabs((xb-xa)*(yc-ya) - (xc-xa)*(yb-ya))/2;
}

void nhap() {
	freopen(TASKNAME".INP", "r", stdin);
	cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1] >> m[0] >> m[1];
}

// mab + mbc + mac 

void giai() {	
	freopen(TASKNAME".OUT", "w", stdout);
	double s1 = dientich(a[0],a[1],b[0],b[1],m[0],m[1]);
	double s2 = dientich(c[0],c[1],b[0],b[1],m[0],m[1]);
	double s3 = dientich(a[0],a[1],c[0],c[1],m[0],m[1]);
	double s = dientich(a[0],a[1],b[0],b[1],c[0],c[1]);
	if (s1+s2+s3 == s) cout << 1;
	else cout << 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	nhap();
	giai();
	return 0;
}




