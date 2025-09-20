#include <bits/stdc++.h>
using namespace std;
#define TASKNAME "ngu"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define endl "\n"
const int N = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

map<string,string> mp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	string s;
	while(getline(cin, s)) {
		stringstream ss(s);
		string word;
		vector<string> v;
		while (ss >> word) {
			
		}
		string xau = "";
		for (int i = 0; i < v.size() - 1;i++) {
			xau += v[i] + ",";
		}
		mp[v[v.size()-1]] +=  xau;
	}
	for (auto it : mp) {
		cout <<it.se << " " << it.fi << endl;
	}
	return 0;
}




