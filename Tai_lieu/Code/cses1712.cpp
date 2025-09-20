#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mode=1e9+7;

int power(int a, int b, int mod){
    int res = 1;
    while(b > 0){
        if(b&1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    while (n--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        cout << power(a,power(b,c,mode-1),mode) << endl;

    }
}
