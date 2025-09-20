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
const int maxn = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen(TASKNAME".INP", "r", stdin);
//	freopen(TASKNAME".OUT", "w", stdout);
	string s;
	cin >> s;
	if (s == ".-") cout << "A";
	else if (s == "-...") cout << "B";
	else if (s == "-.-.") cout << "C";
	else if (s == "-..") cout << "D";
	else if (s == ".") cout << "E";
	else if (s == "..-.") cout << "F";
	else if (s == "--.") cout << "G";
	else if (s == "....") cout << "H";
	else if (s == "..") cout << "I";
	else if (s == ".---") cout << "J";
	else if (s == "-.-") cout << "K";
	else if (s == ".-..") cout << "L";
	else if (s == "--") cout << "M";
	else if (s == "-.") cout << "N";
	else if (s == "---") cout << "O";
	else if (s == ".--.") cout << "P";
	else if (s == "--.-") cout << "Q";
	else if (s == ".-.") cout << "R";
	else if (s == "...") cout << "S";
	else if (s == "-") cout << "T";
	else if (s == "..-") cout << "U";
	else if (s == "...-") cout << "V";
	else if (s == ".--") cout << "W";
	else if (s == "-..-") cout << "X";
	else if (s == "-.--") cout << "Y";
	else if (s == "--..") cout << "Z";
	else if (s == ".----") cout << "1";
	else if (s == "..---") cout << "2";
	else if (s == "...--") cout << "3";
	else if (s == "....-") cout << "4";
	else if (s == ".....") cout << "5";
	else if (s == "-....") cout << "6";
	else if (s == "--...") cout << "7";
	else if (s == "---..") cout << "8";
	else if (s == "----.") cout << "9";
	else if (s == "-----") cout << "0";
	
	return 0;
}



