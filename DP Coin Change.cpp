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
    lli m , n ;
    // cout<<"Enter the sum : "<<endl ;
    cin>>n>>m ;
    lli arr[n+1] ;
    lli num[m] ;
    rep(i,0,m)
        cin>>num[i] ;
    memset(arr , 0 , sizeof(arr)) ;
    arr[0] = 1 ;
    rep(j,0,m)
    {
        rep(i,num[j],n+1)
        {
            arr[i] = arr[i-num[j]] + arr[i] ;
        }
    }
    cout<<arr[n] ;
    return 0;
}
