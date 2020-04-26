#include <bits/stdc++.h>
#define int long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define endl "\n"
using namespace std;
 
int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	// your code goes here
	int t , n , l , r;
    string s  ;
    cin>>t ;
    while(t--)
    {
        vector<int> lol ;
        cin>>s>>l>>r ;
        rep(i,l,r+1)
        {
            lol.PB((int)s[i]) ;
        }
        sort(lol.begin() , lol.end() , greater<int>()) ;
        rep(i,l,r+1)
        {
            s[i] = (char)lol[i-l] ;
        }
        cout<<s<<endl ;
    }
	return 0;
}