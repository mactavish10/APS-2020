#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[10] ;
    char a[10] = "X++" , b[10] = "++X" ;
    int n , x = 0;
    cin>>n ;
    while(n--)
    {
        cin>>str ;
        if( (strcmp(str,a)==0) || (strcmp(str,b)==0))
            x += 1 ;
        else
            x-=1 ;
    }
    cout<<x<<endl ;
	return 0;
}