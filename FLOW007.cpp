#include <bits/stdc++.h>
using namespace std;

int main() {
	int sum = 0 , n , t ;
	cin>>t ;
	while(t--)
	{
	    sum = 0 ;
	    cin>>n ;
	    while(n!=0)
	    {
	        sum = (sum*10) + (n%10) ;
	        n/=10 ;
	    }
	    cout<<sum<<endl ;
	}
	return 0;
}