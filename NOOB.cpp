#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count = 0 , t = 0 , i , j ;
	long int n ;
	cin>>n ;
	long int arr[n] ;//= new long int[n] ;
	for( i = 0 ; i < n ; i++)
	    cin>>arr[i] ;
	sort(arr,arr+n) ;
	for (i=0; i<n; i++)
    {
       while (i < n-1 && arr[i] == arr[i+1])
          i++;
 
       count++ ;
       //cout << arr[i] << " ";
    }
    cout<<endl<<count<<endl ;
	return 0;
}