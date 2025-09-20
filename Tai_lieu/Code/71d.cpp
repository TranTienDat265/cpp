/*
________________________________________________________________________________________________________________
|Name : HuỳnhTấn Đức| ~ | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | Backspace|                            |
|Class: A5K7        |--------------------------------------------------------------|     ++++++                 |
|THPT Đỗ Đăng Tuyển |TAB| Q | W | E | R | T | Y | U | I | O | P | [ | ] | Lovely   |   ++++++++++               |
|Quảng Nam          |--------------------------------------------------------------|  ++++      +               |
|___________________|CapsLK | A | S | D | F | G | H | J | K | L | ; | " | ENTER    |  ++++           *     *    |
|         |(\/)     |--------------------------------------------------------------|  ++++         ***** *****  |
|*=====   |('.')    |   SHIFT   | Z | X | C | V | B | N | M | < | > | ? | SHIFT    |  ++++           *     *    |
|||   "   |(>> 🤍🤍|--------------------------------------------------------------|  ++++      +               |
|||    ++ |_________|Ctrl|Fn|Win|ALT|         SPACE         |ALT|Ctrl| <- | ^ | -> |   ++++++++++               |
|||       |     (\/)|--------------------------------------------------------------|     ++++++                 |
|*===="   | ***('.')| H | U | Ỳ | N | H  |🤍| T | Ấ  | N |🤍 | Đ | Ứ | C | -------|   Flower in Prison         |
|         | \___/<<)|-------------------------------------------------------------------------------------------|
|         | T.Tuyền |   I LOVE COMPETITIVE PROGRAMMING  | I WILL DISCIPLINE MYSELF TO BECOME MORE SUCCESSFUL    |
|_________|_________|___________________________________________________________________________________________|

*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ii pair <int,int>
#define fi first
#define se second
const int mode=1e9+7,N=1e6+7;
void fastIO(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
int n,q,k;
int a[1000006];
void sub1()
{
	while (q--)
	{
		int l,r; cin >> l >> r;
		int res=0;
		for (int i=l;i<r;i++) for (int j=i+1;j<=r;j++) res+=((a[i]*a[j]-a[i]-a[j])%k==0);
		cout << res << '\n';
	}
}
vector <int> d[30001];
void sub2()
{
	for (int i=1;i<n;i++) for (int j=i+1;j<=n;j++)
		if ((a[i]*a[j]-a[i]-a[j])%k==0) d[i].push_back(j);
	int l,r;
	while (q--)
	{
		cin >> l >> r;
		int res=0;
		for (int i=l;i<r;i++)
		{
			int it=upper_bound(d[i].begin(),d[i].end(),r)-d[i].begin();
			res+=it;
		}
		cout << res << '\n';
	}

}
void sub3()
{
	if (q!=1) return;
	int l,r; cin >> l >> r;
	if (r-l+1>1e4) return;
	int res=0;
	for (int i=l;i<r;i++) for (int j=i+1;j<=r;j++) res+=((a[i]*a[j]-a[i]-a[j])%k==0);
	cout << res;
}
void ReadText()
{
	freopen("CNTPAIR.INP","r",stdin);
	freopen("CNTPAIR.OUT","w",stdout);
	cin >> n >> k >> q;
	for (int i=1;i<=n;i++) cin >> a[i];
	if (n<=300) sub1();
	else if (n<=3000) sub2();
	else sub3();


}

signed main()
{
	fastIO();
	ReadText();
	//solve();
}