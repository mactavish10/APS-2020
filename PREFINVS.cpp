#include <bits/stdc++.h>
#define int long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define repd(i, a, b) for (int i=a; i>=b; --i)
#define endl "\n"
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	// your code goes here
	int t , n , c = 0 ;
// 	cin>>t ;
	string s ;
// 	while(t--)
	{
	    cin>>s ;
	    int flag = 0 ;
	    repd(i,s.length(),0)
	    {
	        if (s[i]=='1' and flag==0)
	            {
	                c+=1 ;
	                flag = 1 ;
	            }
	        else if (s[i]=='0' and flag==1)
	        {
	            c+=1 ;
	            flag = 0 ;
	        }
	    }
	    	     cout<<c<<endl ;  
	}
	return 0;
}
