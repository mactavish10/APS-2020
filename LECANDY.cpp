#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t , n , c , i ;
	cin>>t ;
	while(t--)
	{
	    int flag = 1 ;
	    cin>>n>>c ;
	    long long int arr[n] ;
	    for(i = 0 ; i < n ; i++)
	    {
	        cin>>arr[i] ;
	    }
	    for(i = 0 ; i < n ; i++)
	    {
	        c-=arr[i] ;
	        if(c<0){
	            flag = 0 ;
	            break ;
	        }
	    }
	    if(flag)
	        cout<<"Yes"<<endl ;
	    else
	        cout<<"No"<<endl ;
	}
	
	return 0;
}