#include <iostream>
using namespace std;

int main() 
{
	long int t , a , b , c , d ;
	cin>>t ;
	while(t--)
	{
	    cin>>a>>b>>c>>d ;
	    if((a==c && b==d)||(a==d && b==c)||(a==b && c==d))
	        cout<<"YES"<<endl ;
	    else cout<<"NO"<<endl ;
	}
	return 0;
}
