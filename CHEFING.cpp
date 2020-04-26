#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t , n , i , j;
    cin>>t ;
    while(t--)
    {
        int count = 0 ;
        cin>>n ;
        int arr[27] ;
        fill(arr , arr+27 , 0) ;
        //fill(flag , flag+27 , 0) ;
        char str[n][300] , temp[300];
        for( i = 0 ; i < n ; i++ )
        {
            cin>>str[i] ;
            strcpy(temp , str[i]) ;
            set <char>s (temp , temp+strlen(temp)) ;
            j = 0 ;
            for(auto x: s)
                temp[j++] = x ;
            temp[j] = '\0' ;
            strcpy(str[i] , temp) ;
        }
        for( i = 0 ; i < n ; i++ )
        {
            for( j = 0 ; j < strlen(str[i]) ; j++ )
            {   
                arr[str[i][j] - 'a']++ ;
            }
        }
        for ( i = 0 ; i < 27 ; i++ )
        {
            if(arr[i]==n)
                count++ ;
        }
        cout<<count<<endl ;
    }
	return 0;
}