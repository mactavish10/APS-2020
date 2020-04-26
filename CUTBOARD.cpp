#include <bits/stdc++.h>
using namespace std;

int main() {
	int t , n , m , s ;
	cin>>t ;
	while(t--)
	{
	    cin>>n>>m ;
	    s = (n*m) - ((n+m)-1);
	    cout<<s<<endl ;
	}
	return 0;
}
