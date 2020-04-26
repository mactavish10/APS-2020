#include <bits/stdc++.h>
#define lli long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (lli i=a; i<b; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t , n , k;
    cin>>t ;
    while(t--)
    {
        cin>>n>>k ;
        int c = 0 ;
        lli a[n] ;
        rep(i,0,n)
        {
            cin>>a[i] ;
            if(a[i]<=0)
                c+=1 ;
        }
        if(c<k)
            cout<<"YES"<<endl ;
        else
            cout<<"NO"<<endl ;
        
    }
    return 0;
}
