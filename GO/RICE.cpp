#include <bits/stdc++.h>

using namespace std;

long long n,m,x,y,r,a,b;
int bom,cuoi;


int main()
{
    freopen("rice.inp","r",stdin);
    freopen("rice.out","w",stdout);
    cin>>n>>m>>x>>y>>r;
    vector<long long> ox;
    vector<long long> oy;
    for (long long i =0;i<n;i++){
        cin>>a;
        oy.push_back(a);
    }
    for (long long i =0;i<m;i++){
        cin>>b;
        ox.push_back(b);
    }
    //x*x -2*a*x +a*a +y*y -2*b*y + b*b=r*return
    for (long long i=0;i<oy.size();i++){
        for (long long j=0;j<ox.size();j++){
            if (oy[i]*oy[i]- 2*x*oy[i]+x*x + ox[j]*ox[j]-2*y*ox[j]+y*y<=r*r){
                cuoi++;
            }else{
                bom++;
            }
        }
    }
    cout<<max(bom,cuoi)-min(bom,cuoi);

    return 0;
}