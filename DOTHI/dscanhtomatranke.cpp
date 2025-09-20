#include <iostream>
#include <vector>
using namespace std;
int a[1001][1001];
int n,m;
vector<int> adj[1001];
vector<pair<int,int>> edge;
void dscanhtomatranke() {
	cin >>  n >> m;
	for (int i = 1; i <= m; i++) {
		int x,y;
		cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}


void dscanhtodske() {
	cin >>  n >> m;
	for (int i = 1; i <= m; i++) {
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		cout << i << ": ";
		for (int x : adj[i]) cout << x << " ";
		cout << "\n";
	}
}

void matranketodscanh(){
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			if (i < j && a[i][j]) edge.push_back({i,j});
		}
	}
	for (auto it : edge) {
		cout << it.first << " " << it.second << "\n";
	}
}

void matranketodske() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			if (a[i][j]) adj[i].push_back(j);
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << i << ": ";
		for (int x : adj[i]) cout << x << " ";
		cout << "\n";
	}
}

int main() {
	freopen("INPUT.INP", "r", stdin);
	freopen("OUTPUT.OUT", "w", stdout);
	
	matranketodske();
	return 0;
}

