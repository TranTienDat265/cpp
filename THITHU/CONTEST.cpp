#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "CONTEST"
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int maxn = 1e5 + 1;
const int MOD = 1e9 + 7;

int a[maxn] = {0};
int b[maxn] = {0};
bool ok[maxn] = {false};
int n,m;

void inp() {
	cin >> n;
}

void solve() {
	int l = 1, r = n;
	int ans = 0;
	while (l <= r) {
		if (a[r] > b[r]) {
			while (true) {
				if (a[l] < b[l]) l++;
			}
			
		}
	}
}

void subtask1() {
	cin >> n;
	vector<int> a(n + 1);
	vector<int> b(n + 1);
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) cin >> b[i];
	int l = 1;
	int ans = 0;
	while (l <= n) {
		if (a[l] > b[l]) {
			for (int i = n; i >= l; i--) {
				a[i] = a[i - 1];
			}
			a[l] = b[l];
			ans++;
		}
		l++;
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	subtask1();
	return 0;
}


