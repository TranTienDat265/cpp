#include <bits/stdc++.h>
using namespace std;
#define TASKNAME ""
#define SQR(x) (1LL * (x) * (x))
#define MAX 2000001
string s;
int n, cnt[26];
long long limit, cur = 0, res = 0;

void remChar(char c) {
	int k = cnt[c - 'a']--;
	cur -= SQR(k) - SQR(k-1);
}

void addChar(char c) {
	int k = cnt[c - 'a']++;
	cur += SQR(k+1) - SQR(k);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> limit;
	cin.ignore();
	getline(cin, s);
	addChar(s[0]);
	int r = 0;
	for (int l = 0; l < n; l++) {
		if (l > 0) remChar(s[l - 1]);
		while (r < n && cur <= limit) {
			r++;
			if (r < n)  addChar(s[r]);
		} 
		res += r - l;
	}
	cout << res;
	return 0;
}
