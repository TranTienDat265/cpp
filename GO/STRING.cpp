#include <bits/stdc++.h>

using namespace std;

long long n,m,x,y,r,danh_dau;
vector<long long> oa;
vector<long long> ob;
string a,b;



int main()
{
    freopen("string.inp","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for (long long be=0;be<n;be++){
        cin>>a;
        cin>>b;
        if (a.size()==b.size()){
            for (long long i=0;i<a.size();i++){
                if (b[i]!=a[i]){
                    if (i+1!=a.size()){
                        
                    
                        for (long long j=i+1;j<a.size();j++){
                            if (a[j]==b[i]){
                                cout<<"no"<<"\n";
                                danh_dau++;
                                break;
                            }
                        }
                    }else {
                        cout<<"no"<<"\n";
                        danh_dau++;
                        break;
                    }
                }
            }
        }else{
            cout<<"no"<<"\n";
            danh_dau++;
            break;
        }
        if (danh_dau==0){
        cout<<"yes";
        }
        danh_dau=0;
    }
    
    return 0;
}