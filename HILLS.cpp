#include <iostream>
using namespace std;

int main() 
{
    int p ;
	long long int t , n , u , d , i ;
	int *h ;
	cin>>t ;
	while(t--)
	{
	    p = 0 ;
	    int count = 1 , flag = 0 ;
	    cin>>n>>u>>d ;
	    h = new int[n] ;
	    for(i = 0 ; i < n ; i++)
	    {
	        cin>>h[i] ;
	    }
	    for(i = 0 ; i < (n-1) ; i++)
	    {
	        if(h[i]<h[i+1] && (h[i+1]-h[i])>u)
	        {
	            break ;
	        }
	        else if(h[i]>h[i+1] && (h[i]-h[i+1])>d && p<1)
	        p++ ;
	        else if(h[i]>h[i+1] && (h[i]-h[i+1])>d) 
	        {
	            break ;
	        }
	        else continue ;
	    }
	    cout<<(i+1)<<endl ;
	}
	return 0;
}