#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t , n , i ;
    int *a ;
    cin>>t ;
    while(t--)
    {
        int cnt = 0 ;
        cin>>n ;
        a = new int [n] ;
        for( i = 0 ; i < n ; i++ )
        {
            cin>>a[i] ;
        }
        sort(a , a+n) ;
        if(a[0]!=0)
        {
            cout<<"0"<<endl ;
            continue ;
        }
        else
        {
            for( i = 0 ; i < n ; i++ )
            {
                if(a[i] <= cnt)
                    cnt++ ;
                else
                    break ;
            }
        }
        cout<<cnt<<endl ;
    }
	return 0;
}
