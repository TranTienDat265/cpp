#include <bits/stdc++.h>
#define TASKNAME "TNT"
#define N 10001
using namespace std;


int prime[N] = {0}; 

void seive(){
	for(int i = 0; i <= N; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(N); i++){
		if(prime[i]){
			for(int j = i * i; j <= N; j += i){
				prime[j] = 0;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen(TASKNAME".INP", "r", stdin);
	freopen(TASKNAME".OUT", "w", stdout);
	int n;
	cin >> n;
	seive();
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (prime[x]) ans += x;	
	}
	cout << ans;
	
	return 0;
}


