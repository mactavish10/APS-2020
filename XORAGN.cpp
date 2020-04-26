#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t , n , i , res ;
	long long int *a ;
	cin>>t ;
	while(t--)
	{
	    cin>>n ;
	    a = new long long int[n] ;
	    for( i = 0 ; i < n ; i++ )
	        cin>>a[i] ;
	    res = a[0] ;
	    for( i = 1 ; i < n ; i++ )
	    {
	        res = res^a[i] ;
	    }
	    cout<<2*res<<endl ;
	}
	return 0;
}