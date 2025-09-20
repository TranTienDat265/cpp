#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "bai1"
inline bool isDig(char c) { return '0' <= c && c <= '9'; } /// isDigit(char) ?
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	char c;
	int sum = 0;
	int i = 0;
	bool kt = false;
	while (true) {
		c = getchar();
		if (c == '\n') break;
		i++;
		if (i == 1 && c == '?') kt = true;
		if (isDig(c)) sum += (c - '0')*i;
	}
	int ans = -1;
	for (int j = 0; j<= 9; j++) {
		if ((sum + i * j) % 7 == 0) {
			if (kt && j == 0) continue;
			ans = j;
		}
	}
	cout << ans;
	return 0;
}

