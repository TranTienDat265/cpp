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
#define N 10000002
const int maxn = (int) 1e3 + 1;
const int MOD = (int) 1e9 + 7;

int p[N];
int a[maxn], n, prefix[maxn];

void seive() {
	fill(p + 1, p + N + 1, 1);
	p[0] = p[1] = 0;
	for (int i = 2; i * i <= N; i++) {
		if (p[i]) {
			for (int j = i * i; j <= N; j += i) p[j] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	seive();
	int t;
	cin >> n >> t;
	prefix[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		prefix[i] = prefix[i - 1] + a[i];
	}
	while(t--) {
		int u,v;
		cin >> u >> v;
		int s =prefix[v] - prefix[u - 1];
		if (s < 2) cout << "0\n"; 
		else cout << p[s]<< endl;
	}
	 
	return 0;
}




