#include <bits/stdc++.h>
#include<cmath>
#include<math.h>
#define lli long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (lli i=a; i<b; i++)
using namespace std;

// lli arr[1000000] ;

lli dollars(lli n,lli *arr)
{
    if(arr[n]!=0)
        return arr[n] ;
    else if(n<12)
    {
        arr[n] = n ;
        return n ;
    }
        
    return arr[n] = max(n , dollars((n/2),arr) + dollars((n/3),arr) + dollars((n/4),arr)) ;
    // return max(n,dollars(n/2) + dollars(n/3) + dollars(n/4)) ;
}


int main() {
    // memset(arr,0,sizeof(arr));
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    lli n ;
	while(cin>>n)
	{
	    lli *arr = new lli[n+1] ;
	   // vector<lli> divisions;
	    cout<<dollars(n,arr)<<endl ;
	}
	return 0;
}
