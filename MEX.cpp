#include<bits/stdc++.h>
#include<string.h>

using namespace std ;

int main()
{
	long long int l , t , n , i ;
	long long int org[200002] ;
	long long int rem[200002] , all[200002] ;
	cin>>t ;
	while(t--)
	{
		cin>>n>>l ;
		for( i = 0 ; i < n ; i++ )
		{
			cin>>org[i] ;
		}
		memset(all,0,sizeof(long long int)*200002) ;
		for( i = 0 ; i < n ; i++ )
			all[org[i]] = 1 ;
		long long int k = 0 ;
		for( i = 0 ; i < 200002 ; i++ )
		{
			if(!all[i])
				rem[k++] = i ;
		}
		cout<<rem[l] ;
		cout<<endl ;
	}
	//getch() ;
	return 0 ;
}