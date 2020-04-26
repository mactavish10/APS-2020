#include <iostream>
using namespace std;

int main() {
    char a[100][100] , b[100][100] , c[100][100];
    int m , m1 , n , n1 , t , count = 0 , count1 = 0 ;
    cin>>t ;
    while(t--)
    {
        count = 0 ;
        count1 = 0 ;
    cin>>n1>>m1 ;
    for(n = 1 ; n<=n1 ; n++)
    {
	  for( m = 1 ; m <= m1 ; m++ )
    	    {
    	        if(n%2==0)
    	        {
    	            if(m%2==0)
    	            {
    	        	    a[n][m] = 'R' ; 
    	        	    b[n][m] = 'G' ;
    	            }
    	            else
    	            {
    	                b[n][m] = 'R' ; 
    	        	    a[n][m] = 'G' ;
    	            }
				}
				if(n%2!=0)
				{
				    if(m%2!=0)
    	            {
    	        	    a[n][m] = 'R' ; 
    	        	    b[n][m] = 'G' ;
    	            }
    	            else
    	            {
    	                b[n][m] = 'R' ; 
    	        	    a[n][m] = 'G' ;
    	            }
				}
			}
    }
     for(n = 1 ; n<=n1 ; n++)
     {
			 for( m = 1 ; m <= m1 ; m++ )
			       cin>>c[n][m] ;
			//cout<<endl<<"B = "<<b ;
     }
     for(n = 1 ; n<=n1 ; n++)
     {
			 for( m = 1 ; m <= m1 ; m++ )
			 {
			     	if(c[n][m]!=a[n][m])
				{
					if(c[n][m]=='G')
						count+=3 ;
					else count+=5 ;
				}
				if(c[n][m]!=b[n][m])
				{
					if(c[n][m]=='G')
						count1+=3 ;
					else count1+=5 ;
				}
			 }
    }
    if(count<count1) cout<<count<<endl ;
    else cout<<count1<<endl ;
}
	return 0;
}