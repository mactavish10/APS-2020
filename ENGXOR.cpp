#include <bits/stdc++.h>
// #define int long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define endl "\n"
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);  
    int n , t , p , q , temp , y , e , flag , o ;
    // fastscan(t) ;
    // cout<<t ;
    scanf("%d",&t) ;
    while(t--)
    {
        e = 0 , o = 0;
        // vector<int> arr ;
        
        scanf("%d%d",&n,&q) ;
        // fastscan(n) ;
        // fastscan(q) ;

        rep(i,0,n)
        {
            scanf("%d",&y) ;
            if(((__builtin_popcount(y))&1)==0)
                e+=1 ;
            else
                o+=1 ;
        }
         
        while(q--)
        {
            // flag = 1;
            scanf("%d",&p) ;
            if(( (__builtin_popcount(p))&1)==0)
                printf("%d %d\n",e,o) ;
            else
                printf("%d %d\n",o,e) ;
            // else 
            // printf("%d %d\n",e,n-e) ;
        }
    }
	return 0;
}