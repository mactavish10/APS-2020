#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int c , n , q , l , r , i ;
	char p ;
	cin>>n ;
	int count = 0 ;
	char s[10000][10000] ;
	for( i = 1 ; i <= n ; i++)
	{
	    cin>>s[i] ;
	}
	cin>>q ;
	while(q--) 
	{
	    cin>>l>>r>>c>>p ;
	    for( i = l ; i <= r ; i++ )
	    {
	        //cout<<s[i][c-1]<<endl ;
	        if(s[i][c-1] == p)
	            count++ ;
	    }
	    cout<<count<<endl ;
	    count = 0 ;
	}
	return 0;
}
