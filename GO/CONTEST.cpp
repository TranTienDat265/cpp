#include <bits/stdc++.h>

using namespace std;

long long n,m,x,y,r,danh_dau,max_num=0;
vector<long long> oa;
vector<long long> ob;



int main()
{
    // freopen("contest.inp","r",stdin);
    // freopen("contest.out","w",stdout);
    cin>>n;
    for (long long i=0;i<n;i++){
        cin>>x;
        oa.push_back(x);
    }
    for (long long i=0;i<n;i++){
        cin>>y;
        ob.push_back(y);
    }
    for (long long i=0;i<n;i++){
        if (oa[i]>ob[i]){
            long long j=i;
            while (oa[i]>ob[j] and j<n){
                danh_dau++;
                j++;
            }
        }
        max_num=max(max_num,danh_dau);
        danh_dau=0;
    }
    cout<<max_num;
    return 0;
}