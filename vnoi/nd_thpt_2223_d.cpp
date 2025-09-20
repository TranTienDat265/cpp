#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "SDB"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int maxn = (int) 1e5 + 1;
const int MOD = (int) 1e9 + 7;

vector<int> prime;
int p[maxn];

void seive() {
	for (int i = 0; i <= maxn; i++) p[i] = 1;
	p[0]= p[1] = 0;
	for (int i = 2; i*i<= maxn;i++) {
		if (p[i]) {
			for (int j = i*i; j <= maxn; j+=i) {
				p[j] = 0;
			}
		}
	}
	for (int i = 0; i <= maxn; i++) if (p[i]) prime.pb(i);
}

ll x;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	seive();
	int t; cin >> t;
//	int t = 1;
	while (t--) {
		cin >> x;
		x = 1LL* sqrt(x);
		auto it = upper_bound(prime.begin(), prime.end(), x);
		ll numb = *it;
		numb = numb*numb;
		cout << numb << " ";
		
	}
	return 0;
}




