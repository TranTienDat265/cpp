#include <bits/stdc++.h>
#include <map>
#include <cmath>
using namespace std;

int main() {
	long long n;
	cin >> n;
	map<long long,int> mp;
	for (int i = 2; i <= sqrt(n); i++) {
		while (n%i==0) {
			n/=i;
			mp[i]++;
		}
	}
	if (n > 1) mp[n]++;
	cout << mp.size() << endl;
//	for (map<long long,int>::iterator it = mp.begin(); it !=mp.end();it++){
//		cout << (*it).first << " " << (*it).second << endl;
//	}
	for (auto it : mp) {
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}

