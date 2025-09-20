#include <bits/stdc++.h>
using namespace std ;
const int N = 200020 ;

int n ;

struct SegTree {
    #define root 1,n+10,1
    #define lr rt<<1
    #define rr rt<<1|1
    #define lson l,mid,rt<<1
    #define rson mid+1,r,rt<<1|1
    int mx[N<<2]  ;

    void Up( int rt ) {
        mx[rt] = max( mx[lr] , mx[rr] ) ;
    }

    void Build( int l , int r , int rt ) {
        mx[rt] = 0 ;
        if( l == r ) return ;
        int mid = ( l+r ) >> 1 ;
        Build(lson),Build(rson) ;
    }

    void Update( int l , int r , int rt , int x , int v ) {
        if( l == r ) { mx[rt] = v ; return ; }
        int mid = (l+r)>>1;
        if( x <= mid ) Update( lson , x , v );
        else Update( rson , x , v);
        Up(rt);
    }

    int Query( int l , int r , int rt , int L , int R ) {
        if( l == L && r == R ) return mx[rt] ;
        int mid = (l+r) >> 1 ;
        if( R <= mid ) return Query( lson , L , R ) ;
        else if( L > mid ) return Query( rson , L , R ) ;
        else return max( Query( lson , L , mid ) , Query( rson , mid + 1 , R ) ) ;
    }
} T;

struct node {  int x , y , id ; } e[N] ;

inline bool cmp1( const node &a , const node &b ) {
    if( a.x != b.x ) return a.x < b.x ;
    else return a.y < b.y ;
}

inline bool cmp2( const node &a , const node &b ) {
    if( a.x != b.x ) return a.x > b.x ;
    else return a.y > b.y ;
}


map<int,int>idx;
vector<int>a;
int S[N] , top ;

vector<int> ans1 , ans2 ;
int cnt[N] , dp[2][N] ;


void Doit( int k , int p ) {
    for( int i = top - 1 ; i >= 0 ; --i ) {
        int id = idx[ e[p].y ] ;
        dp[k][ e[p].id ] = S[i] ;
        T.Update( root , id , S[i] );
        p-- ;
    }
}


void Gao() {

    memset( dp , 0 , sizeof dp ) ;
    memset( cnt , 0 , sizeof cnt ) ;

    sort( e + 1 , e + n + 1 , cmp1 ) ;
    T.Build( root ) ; top = 0 ;
    for( int i = 1 ; i <= n ; ++i ) {
        int id = idx[ e[i].y ] ;
        if( i == n || e[i].x != e[i+1].x ) {
            S[top++] = T.Query( root , 1 , id - 1 ) + 1 ;
            Doit( 0 , i );
            top = 0 ;
        } else {
            S[top++] = T.Query( root , 1 , id - 1 ) + 1 ;
        }
    }
    sort( e + 1 , e + n + 1 , cmp2 ) ;
    T.Build( root ) ; top = 0 ;
    for( int i = 1 ; i <= n ; ++i ) {
        int id =  idx[ e[i].y ] ;
        if( i == n || e[i].x != e[i+1].x ) {
            S[top++] = T.Query( root , id + 1 , n + 10 ) + 1 ;
            Doit( 1 , i );
            top = 0 ;
        } else {
            S[top++] = T.Query( root , id + 1 , n + 10 ) + 1 ;
        }
    }

//    for( int i = 1 ; i <= n ; ++i ) cout << e[i].id << ' ' << dp[0][ e[i].id ] << ' ' << dp[1][ e[i].id ] << endl ;

    ans1.clear() , ans2.clear() ;
    int len = 0 ;
    for( int i = 1 ; i <= n ; ++i ) len = max( len , dp[0][i] + dp[1][i] ) ;
    for( int i = 1 ; i <= n ; ++i ) if( dp[0][ e[i].id ] + dp[1][ e[i].id ] == len ) ans1.push_back( e[i].id ) , cnt[ dp[0][ e[i].id ] ]++ ;
    for( int i = 1 ; i <= n ; ++i ) if( dp[0][ e[i].id ] + dp[1][ e[i].id ] == len && cnt[ dp[0][e[i].id] ] == 1 ) ans2.push_back( e[i].id ) ;
}

void Output() {
    sort( ans1.begin() , ans1.end() ) , sort( ans2.begin() , ans2.end() ) ;
    printf("%d",ans1.size()); for( int i = 0 ; i < ans1.size() ; ++i ) printf(" %d",ans1[i]);puts("");
    printf("%d",ans2.size()); for( int i = 0 ; i < ans2.size() ; ++i ) printf(" %d",ans2[i]);puts("");
}

int main() {
    while( ~scanf("%d",&n) ) {
        idx.clear(); a.clear(); 
        for( int i = 1 ; i <= n ; ++i ) {
            scanf("%d%d",&e[i].x,&e[i].y);
            e[i].id = i ;
            a.push_back( e[i].y );
        }
        sort( a.begin() , a.end() ) ;
        int tot = 2 ;
        for( int i = 0 ; i < a.size() ; ++i ) {
            if( idx.find( a[i] ) == idx.end() ) {
                idx[ a[i] ] = tot++ ;
            }
        }
        Gao(); Output();
    }
    return 0 ;  
}
