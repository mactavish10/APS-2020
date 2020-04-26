#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t , n , i , n1 ;
	char s[101] , temp ;
	cin>>t ;
	while(t--)
	{
	    cin>>n ;
	    if(n%2!=0) n1 = n - 1 ;
	    else n1 = n ;
	    cin>>s ;
	    for( i = 0 ; i < n1 ; i+=2 )
	    {
	        if((i+1)!=n1)
	        {
	            temp = s[i] ;
	            s[i] = s[i+1] ;
	            s[i+1] = temp ;
	        }
	            
	    }
	    for( i = 0 ; i < n ; i++)
	    {
	        s[i] = 219 - s[i] ;
	    }
	    cout<<s<<endl ;
	}
	return 0;
}
