#include <iostream>
using namespace std;

int main()
{
	long long int t , n , i , front = 1 , back = 1 , j ;
	int *l , *g , *g1 ;
	cin>>t ;
	while(t--)
	{
	    cin>>n ;
	    l = new int[n] ;
	    g = new int[n] ;
	    g1 = new int[n] ;
	    front = 0 ;
	    back = 0 ;
	    for(i=0;i<n;i++)
	    {
	        cin>>l[i] ;
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>g[i] ;
	    }
	    for(i = 0 , j = (n-1) ; i < n , j >= 0 ; i++, j--)
	    {
	        g1[j] = g[i] ;
	    }
	    for(i=0;i<n;i++)
	    {
	        if(l[i]<=g1[i])
	            back++ ;
	        else break ;
	    }
	    for(i=0;i<n;i++)
	    {
	        if(l[i]<=g[i])
	            front++ ;
	        else break ;
	    }
	    //cout<<"back = "<<back<<" front = "<<front<<endl ;
	    //cout<<"back + front = "<<back+front<<" == "<<n<<endl ;
	    if((front*back)==(n*n)) cout<<"both"<<endl ;
	    else if(front==n) cout<<"front"<<endl ;
	    else if(back==n) cout<<"back"<<endl ;
	    else cout<<"none"<<endl ;
	    front = 0 ;
	    back = 0 ;
	}
	return 0;
}