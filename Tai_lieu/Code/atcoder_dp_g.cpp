#include <bits/stdc++.h>
using namespace std;
int dp[100005], in[100005];
bool mark[100005];
vector <int> g[100005];

void dfs(int u)
{
	mark[u] = true;
	for (int v : g[u])
	{
		if (!mark[v]) dfs(v);
		dp[u] = max(dp[u], dp[v] + 1);
	}
}

signed main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m; cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int u, v; cin >> u >> v;
		g[u].push_back(v);
		in[v]++;
	}
	queue <int> q;
	for (int i = 1; i <= n; i++) 
		if (in[i] == 0) q.push(i);
	vector <int> vec;
	while (q.size()) 
	{
		int u = q.front(); q.pop();
		vec.push_back(u);
		for (int v : g[u])
			if (--in[v] == 0) q.push(v);
	}
	reverse(begin(vec), end(vec));
	for (int x : vec)
		if (!mark[x]) dfs(x);
	cout << *max_element(dp + 1, dp + n + 1);
}