#include <bits/stdc++.h>
#define int long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define endl "\n"
using namespace std;


int getInvCount(int arr[], int n) 
{ 
    int inv_count = 0; 
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            if (arr[i] > arr[j]) 
                inv_count++; 
  
    return inv_count; 
}

int getlocalinv(int arr[] , int n)
{
    int inv = 0 ;
    rep(i,0,n-1)
    {
        if(arr[i]>arr[i+1])
            inv+=1 ;
    }
    return inv ;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	// your code goes here
	int t , n ;
	cin>>t ;
	while(t--)
	{
	    cin>>n ;
	    int arr[n+1] ;
	    rep(i,0,n)
	        cin>>arr[i] ;
	    if(getInvCount(arr,n) == getlocalinv(arr,n))
	        cout<<"YES"<<endl ;
	    else 
	        cout<<"NO"<<endl ;
	}
	return 0;
}
