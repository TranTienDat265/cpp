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
const int N = (int) 1e6 + 1;
const int MOD = (int) 1e9 + 7;

vector<int> adj[1001];
bool visited[10001] = {false};
int parent[1005];

void dfs(int u) {
	visited[u] = true;
//	cout << u << " ";
	for (int v: adj[u]) {
		if (!visited[v]) {
			parent[v] = u;
			dfs(v);
		}
	}
}

void sss() {
	string s; getline(cin , s);
	stringstream ss(s);
	string word;
	// huy - le - ngu
	while (getline(ss, word,'-')) {
		cout << word << endl;
	}
}

void dfs_suon() {
	int n,m; cin >> n >> m;
	int a[n][n];
	for (int i = 1; i <= m; i++) {
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int cnt = 0;
	for (int i = 1; i <=n ; i++) 
	{
		if (!visited[i]) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;
	/*
	5 4
	2 5
	4 1
	4 2
	4 3
	*/
}

void dsctodsk() {
	int n,m; cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].pb(y);
	}
	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end());
		cout << i << ": ";
		for (int x : adj[i]) cout << x << " ";
		cout << endl;
	}
/*
5 10
4 2
4 1
2 5
3 4
1 5
2 3
5 1
2 1
1 4
4 5
*/
}

void xuly(int i , string s) {
	stringstream ss(s);
	string numb;
	vector<int> v;
	while (ss >> numb) {
		int num = stoi(numb);
		v.pb(num);
	}
	sort(v.begin(), v.end());
	for (int x : v) {
		cout << i << " " << x << endl;
	}
}

void dsktodsc() {
	int n; cin >> n; cin.ignore();
	for (int i = 1 ; i <= n ; i++) {
		string s;
		getline(cin , s);
		xuly(i,s);
	}
	/*
	5
	5 3 4
	4 1 3 5
	4 2
	3 1 2
	3 2
	*/
}

void dfs2(int u) {
	visited[u] = true;
	for (int v : adj[u]) {
		if (!visited[v]) dfs2(v);
	}
}

void dfs_suon2() {
	int n,m,s,t; cin >> n >> m >> s >> t;
	for (int i = 0; i < m; i++) {
		int x,y; cin >> x>> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for (int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	dfs(s);
	if (visited[t]) {
		vector<int> path;
		while (t != s) {
			path.push_back(t);
			t = parent[t];
		}
		path.pb(s);
		for (int i = path.size() - 1; i >= 0; i--) {
			cout << path[i] << " ";
		}
	}
	else cout << -1;
	/*
	8 9 1 8
	1 2
	1 3
	2 3
	3 4
	2 5
	3 5
	5 6
	5 7
	7 8
	*/
	
}

void bfs(int u) {
	queue<int> q;
	q.push(u); visited[u] = true;
	while (!q.empty()) {
		int v = q.front();  q.pop();
		cout << v << " ";
		for (int x : adj[v]) {
			if (!visited[x]) {
				visited[x] = true;
				q.push(x);
			}
		}
	}
}

void bfs_suon() {
	int n,m; cin >> n >> m;
	for (int  i =0 ; i < m; i++) {
		int x,y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	bfs(1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	sss();
//	dsktodsc();
//	dfs_suon2();
	bfs_suon();

	return 0;
}
/*
10 9
1 2
1 3
1 4
2 5
2 7
3 6
4 8
5 9
7 10
*/



