#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
    int temp;
    while(b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    long int a[10001] ;
    int t , n , count = 0 ;
    cin>>t ;
    while(t--)
    {
        count = 0 ;
        cin>>n ;
        for(int i = 0 ; i < n ; i++ )
            cin>>a[i] ;
        sort(a,a+n) ;
        int result = a[0];
        for(int i=1; i<n; i++)
        {
                result = gcd(result, a[i]);
                //cout<<"Result = "<<result<<endl ;
                if(result!=1) count++ ;
                //cout<<"Count = "<<count<<endl ;
        }
        if(count>(n-1) || result!=1) cout<<"-1"<<endl ;
        else cout << count << endl ;
    }
    return 0;
}