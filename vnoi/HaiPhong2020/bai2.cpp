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

bool prime(ll n)
{
    if (n == 2 || n == 3)
        return true;
    if (n < 3 || n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

bool ok(ll n) {
	if (!prime(n)) return false;
	int flag = 0;
	for (int i = 1; i <= 9; i++) {
		if (prime(n * 10 + i)) {
			flag = 1; break;
		}
	}

	if (!flag) return false;
	n/=10;
	while (n > 0) {
		if (!prime(n)) return false;
		n /= 10;
	}
	return true;
}

int n, a[maxn], cnt[maxn];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cnt[0] = 0;
	if (ok(a[0])) cnt[0] = 1; 
	for (int i = 1; i < n; i++) {
		cnt[i] = cnt[i - 1];
		if (ok(a[i])) cnt[i]++;
	}
//	for (int i = 0; i < n; i++)cout << cnt[i] << " ";
	int t; cin >> t;
	while (t--) {
		int x,y; cin >> x >> y;
		x--; y--;
		cout << cnt[y] - cnt[x - 1] << endl;
	}
	return 0;
}




