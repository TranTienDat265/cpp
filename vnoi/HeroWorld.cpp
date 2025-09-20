#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define print_op(...) ostream& operator<<(ostream& out, const __VA_ARGS__& u)
#define db(val) "["#val" = "<<(val)<<"] "
#define CONCAT_(x, y) x##y
#define CONCAT(x, y) CONCAT_(x, y)
#ifdef LOCAL   
#   define clog cerr << setw(__db_level * 2) << setfill(' ') << "" << setw(0)
#   define DB() debug_block CONCAT(dbbl, __LINE__)
    int __db_level = 0;
    struct debug_block {
        debug_block() { clog << "{" << endl; ++__db_level; }
        ~debug_block() { --__db_level; clog << "}" << endl; }
    };
#else
#   define clog if (0) cerr
#   define DB(...)
#endif
template<class U, class V> print_op(pair<U, V>) {
    return out << "(" << u.first << ", " << u.second << ")";
}
template<class Con, class = decltype(begin(declval<Con>()))>
typename enable_if<!is_same<Con, string>::value, ostream&>::type
operator<<(ostream& out, const Con& con) { 
    out << "{";
    for (auto beg = con.begin(), it = beg; it != con.end(); ++it)
        out << (it == beg ? "" : ", ") << *it;
    return out << "}";
}


int n;
ll x;

void solve() {
    cin >> n >> x;
    vector<ll> a(n);
    for (ll& x : a) cin >> x;
    sort(a.begin(), a.end());
    int res = 0;
    for (int i = 1; i <= n; ++ i) {
        // x = x * i!
        int pos = -1;
        for (int j = a.size() - 1; j >= 0; -- j) {
            // a[i] = a[i] * (i - 1)!
            if (x >= a[j] / i + (a[j] % i != 0)) {
            	cout << a[j] / i + (a[j] % i != 0) << endl;
                pos = j;
                break;
            }
        }
        if (pos == -1) {
            break;
        }
         cout << x << " " << i << " " << a[pos] << endl;
        a.erase(a.begin() + pos);
        ++ res;
    }
    cout << res << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt --) {
        solve();
        // brute();
    }

    // brute();
    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
}

