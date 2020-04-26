#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t , n , i ;
	char s[1000] ;
	cin>>t ;
	while(t--)
	{
	    cin>>s ;
	    int arr[26] = {0}, arr1[26] = {0} ;
	    int len = strlen(s) ;
	    n = len/2 ;
	    for(i = 0 ; i < n ; i++)
	    {
	        arr[s[i]-97]++ ;
	    }
	    if(len%2==0)
	    {
	        for(i = len-1 ; i >= n ; i--)
	            arr1[s[i]-97]++ ;
	    }
	    else
	    {
	        for(i = len-1 ; i > n ; i--)
	            arr1[s[i]-97]++ ;
	    }
	    int flag = 1 ;
	    for( i = 0 ; i < 25 ; i++)
	    {
	        if(arr[i]!=arr1[i])
	        {
	            flag = 0 ;
	            break ;
	        }
	    }
	    if(flag==1) cout<<"YES"<<endl ;
	    else cout<<"NO"<<endl ;
	}
	return 0;
}
