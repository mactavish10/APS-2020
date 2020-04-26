#include <bits/stdc++.h>
#define lli long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (lli i=a; i<b; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	lli t , n , input , sum = 0 ;
	cin>>t ;
	while(t--)
	{
	    vector<lli> arr ;
	    sum = 0 ;
		cin>>n ;
		rep(i,0,n)
		{
			cin>>input ;
			arr.PB(input) ;
		}
		sort(arr.begin() , arr.end()) ;
		rep(i,0,n)
		{
		  //  cout<<arr[n-1]<<"\t"<<arr[i]<<endl ;
			sum+=(arr[i]-arr[0]) ;
		}
		cout<<sum<<endl ;
	}
	return 0;
}