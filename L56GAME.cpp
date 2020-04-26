#include <iostream>
using namespace std;

int main() {
	int t , n , i , a[1000] ;
	cin>>t ;
	while(t--)
	{
	    int sum = 0 ;
	    cin>>n ;
	    for( i = 0 ; i < n ; i++)
	    {
	        cin>>a[i] ;
	        sum = sum + a[i] ;
	    }
	    if(sum%2==0)
	    cout<<"1"<<endl ;
	    else cout<<"2"<<endl ;
	}
	return 0;
}