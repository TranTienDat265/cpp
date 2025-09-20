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

bool isSquare(ll n) {
	ll sqr = sqrt(n);
	return sqr * sqr == n;
}

ll cal(long long k)
{
    int dem = 0 ;
    for(long long i=1; i*i <= k; i++)
    {
        long long x = k - i*i;
        x = sqrt(x);
//        cout << x * x << " " << i * i <<endl;
        if(x*x + i*i == k) dem++;
    }
    return dem;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	ll n; cin >> n;
	int cnt = 0;
	for (ll i = 1; i * i <= n; i++) {
		if (isSquare(n - i * i)) {
			cnt++;
		}
	}
	cout << cnt;
//	cout << cal(n);
	return 0;
}




