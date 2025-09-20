#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[50005];

struct Segmentree
{
	vector <int> seg;
	int n;
	Segmentree (int _n)
	{
		n = _n;
		seg.assign(n * 4 + 5, 0);
		build(1, 1, n);
	}
	void build(int id, int l, int r)
	{
		if (l == r) return seg[id] = a[l], void();
		int mid = (l + r) >> 1;
		build(id * 2, l, mid);
		build(id * 2 + 1, mid + 1, r);
		seg[id] = max(seg[id * 2], seg[id * 2 + 1]);
	}
	int get(int id, int l, int r, int u, int v)
	{
		if (u > r || v < l) return 0;
		if (u <= l && r <= v) return seg[id];
		int mid = (l + r) >> 1;
		return max(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
	}
	int get(int l, int r)
	{
		return get(1, 1, n, l, r);
	}

};


signed main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, q; cin >> n >> q;
	for (int i = 1; i <= n; i++) cin >> a[i];
	Segmentree st(n);
	while (q--)
	{
		int a, b; cin >> a >> b;
		cout << st.get(a, b) << '\n';
	}
}