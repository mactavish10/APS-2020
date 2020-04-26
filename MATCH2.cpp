#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	long long int n , q , c , l , r , x , y ,z ,i;
	cin>>t ;
	long long int a[10005] , b[10005] ;
	while(t--)
	{
	    int count = 0 ;
	    cin>>n>>q ;
	    for(i=1;i<=n;i++)
	        cin>>a[i] ;
	    for(i=1;i<=n;i++)
	        cin>>b[i] ;
	    for(i=1;i<=n;i++)
	    {
	        if(a[i]==b[i])
	            count++ ;
	    }
	    while(q--)
	    {
	        int c1 = 0 ;
	        cin>>x>>y>>z ;
	        l = x^count ;
	        r = y^count ;
	        c = z^count ;
	        for( i = l ; i <=r ; i++)
	            a[i] = c ;
	        for(i=1;i<=n;i++)
	        {
	            if(a[i]==b[i])
	                c1++ ;
	        }
	        cout<<c1<<endl ;
	        count = c1 ;
	    }
	}
	return 0;
}
