#include <bits/stdc++.h>
using namespace std;

int days(char s[])
{
    int day ;
    if(strcmp(s,"sat")==0)
        day = 6 ;
    else if(strcmp(s,"mon")==0)
        day = 1 ;
    else if(strcmp(s,"tues")==0)
        day = 2 ;
    else if(strcmp(s,"wed")==0)
        day = 3 ;
    else if(strcmp(s,"thurs")==0)
        day = 4 ;
    else if(strcmp(s,"fri")==0)
        day = 5 ;
    else day = 7 ;
    return day ;
}
int main() {
	// your code goes here
	int t , i , n , day , ans[10];
	char s[100] ;
	cin>>t ;
	while(t--)
	{
	    cin>>n>>s ;
	    day = days(s) ;
	    //cout<<n<<endl<<s ;
	    for( i = 1 ; i <= 7 ; i++)
	    {
	        ans[i] = 4 ;
	    }
	    for( i = n - 28 ; i > 0 ; i--)
	    {
	        if(day > 7)
	            day = day - 7 ;
	        ans[day]++ ;
	        day++ ;
	    }
	    for( i = 1 ; i <= 7 ; i++)
	        cout<<ans[i]<<" " ;
	    cout<<endl ;
	}
	return 0;
}
