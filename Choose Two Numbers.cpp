#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m  , *a , *b;
    cin>>n ;
    a = new int [n] ;
    int i , j ;
    for ( i = 0 ; i < n ; i++)
        cin>>a[i] ;
    cin>>m ;
    b = new int[m] ;
    for( i = 0 ; i < m ; i++ )
        cin>>b[i] ;
    sort(a , a+n) ;
    sort(b , b+m) ;
    cout<<a[n-1]<<" "<<b[m-1] ;
	return 0;
}