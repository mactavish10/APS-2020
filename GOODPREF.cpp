#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0) ;
	long long t , i , j , n , a , cnt_a, r, sum ;
	string s ;
	cin>>t ;
	while(t--)
	{
	    cnt_a = 0 ;
	    cin>>s ;
	    cin>>n ;
	    //cout<<s<<"\n"<<n<<endl ;
	    sum = 0 ;
	    //for( j = 0 ; j < n ; j++)
	    while(n--)
	    {
	        r = 0 ;
    	    for( i = 0 ; i < s.length() ; i++)
    	    {
    	        if(s[i]=='a')
    	            cnt_a++ ;
    	        else cnt_a-- ;
    	        if(cnt_a>0) r++ ;
    	    }
    	    sum+=r;
			if(r==s.length() || r==0 || cnt_a==0) break;
	    }
	    if(r==s.length() || cnt_a==0)
		    sum+=r*n;
	    cout<<sum<<"\n" ;
	}
	return 0 ;
}