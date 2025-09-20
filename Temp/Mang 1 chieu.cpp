#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
using ll = long long;

void Bai1SapDatSo(){
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		map<ll,bool> mp;
		for (int i = 0; i < n; i++) {
			ll x; cin >> x;
			mp[x] = true;
		}
		for (int i = 0; i < n; i++){
			if (mp[i]) cout << i << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
}

void Bai2SNNXHTD() {
	int t;
	cin >> t;
	int cnt[1000002];
	while (t--) {
		int n;  cin >> n;
		memset(cnt, 0, sizeof(cnt));
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (x > 0) cnt[x]++;
		}
		for (int i = 1; i <= 1000001; i++) {
			if (cnt[i] == 0) {
				cout << i << endl;
				break;
			}
		}
	}
}

void Bai3KCNN() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 1];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int res = INT_MAX;
		for (int i = 0; i < n - 1; i++) {
			res = min(res, a[i + 1] - a[i]);
		}
		cout << res << endl;
	}
}

void Bai4() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n + 1];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n, greater<int>());
		for (int i = 0; i < k; i++) cout << a[i] << " ";
		cout << endl;
	}
}

void Bai5() {
	int n;
	map<int,int> mp;
	cin >> n;
	int a[n + 1];
	for (int i  = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (mp[a[i]] >= 2) {
			res += mp[a[i]];
			mp[a[i]] = 0;
		}
	}
	cout << res;
}

void slidingWindow() {
	int n,k;
	cin >> n >> k;
	int a[n + 1];
	for (int i = 0; i <n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	int idx = 0;
	for (int i = 0; i < k; i++) sum += a[i];
	int res = sum;
	for (int i = k; i < n; i++) {
		sum =  sum - a[i - k] + a[i];
		if(sum > res) {
			res = sum;
			idx = i - k + 1;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << a[idx + i] << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	slidingWindow();
	return 0;
}

