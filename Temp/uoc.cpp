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
const int maxn = (int) 1e6 + 5;
const int MOD = (int) 1e9 + 7;

int p[maxn],cnt[maxn];

void sang() {
	for (int i = 1; i <= maxn; i++) {
		p[i] = i;
	}
	for (int i = 2; i <= sqrt(maxn); i++) {
		if (p[i] == i) {
			for (int j = i * i; j <= maxn; j += i) {
				if (p[j] == j) p[j] = i;
			}
		}
	}	
}



void pt(int n) {
	while (n != 1) {
		int x = p[n];
		while (n % x == 0) {
			cnt[x]++;
			n /= x;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	memset(cnt, sizeof(cnt), 0);
	sang();
	int n,x; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		pt(x);
	}
	ll ans = 1;
    for(int i = 2; i <= maxn; i++){
        if(cnt[i] != 0){
            ans *= (cnt[i] + 1);
            ans %= MOD;
        }
    }
    cout << ans;

	return 0;
}




