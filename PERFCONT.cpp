#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t , n , p , i , c = 0 , c1 = 0 ;
    int* a = NULL ;
    cin>>t ;
    while(t--)
    {
        cin>>n>>p ;
        a = new int[n] ;
        c = 0 ;
        c1 = 0 ;
        for ( i = 0 ; i < n ; i++ )
        {
            cin>>a[i] ;
            if(a[i] >= p/2)
                c++ ;
            if(a[i] <= p/10)
                c1++ ;
        }
        if( c == 1 && c1 == 2)
                cout<<"yes"<<endl ;
        else cout<<"no"<<endl ;
    }
    return 0 ;
}