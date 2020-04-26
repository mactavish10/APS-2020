#include <bits/stdc++.h>
using namespace std;

int main() {
	int c = 0 , t , n , *a , i , j , k ;
	cin>>t ;
	while(t--)
	{
	    c = 0 ;
	    cin>>n ;
	    a = new int[n] ;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i] ;
	    }
	    sort(a,a+n) ;
	    for(i=0;i<n;i++)
	    {
	            if(a[i]==a[i+1])
	            {
	                a[i]+=a[i+1] ;
	                c++ ;
	            }
	    }
	    cout<<c<<endl ;
	}
	
	return 0;
}