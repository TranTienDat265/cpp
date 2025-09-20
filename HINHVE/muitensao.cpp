#include <iostream>
using namespace std;

int main() {
	int n=5;
	for (int i = 1; i <= n;  i++){
		for(int j=1;j<=n+i-1;j++){
			if (j<=(i-1)*2) cout << "~";
			else cout<<"*";
		}
		cout << "\n";
	}
	for (int i=n-1;i>=1;i--){
		for(int j=1;j<=n+i-1;j++){
			if(j<=(i-1)*2) cout << "~";
			else cout <<"*";
		}
		cout <<"\n";
	}
	for (int i=n;i>=1;i--){
		for(int j=1;j<=2*i-1;j++){
			if(j>i-1)cout<<"*";
			else cout<<"~";
		}
		cout <<"\n";
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=2*i-1;j++){
			if(j<=i-1) cout <<"~";
			else cout <<"*";
		}
		cout <<"\n";
	}
	
	return 0;
}

