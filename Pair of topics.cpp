#include <bits/stdc++.h>
#define int long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define endl "\n"
using namespace std;
 
int32_t main()
{
	int t , n , temp , xd;
// 	cin >> t;
// 	while(t--)
	{
	    xd = 0 ;
	    cin>>n ;
		vector <int> lol ;
		vector <int> lmfao ;
		vector <int> yme(n) ;
// 		int yme[n] ;
		rep(i,0,n)
		{
		    cin>>temp ;
		    lol.PB(temp) ;
		}
		rep(i,0,n)
		{
		    cin>>temp ;
		    lmfao.PB(temp) ;
		}
// 		sort(lol.begin() , lol.end()) ;
// 		sort(lmfao.begin() , lmfao.end()) ;
// 		int s1 = accumulate(lol.begin() , lol.end() , 0 ) ;
// 		int s2 = accumulate(lmfao.begin() , lmfao.end(), 0 ) ;
        
        rep(i,0,n)
        {
            yme[i] = lol[i] - lmfao[i] ;
        }
        sort(yme.begin() , yme.end()) ;
        rep(i,0,n)
        {
            if ( yme[i] < 1 ) continue ;
                int killme = lower_bound(yme.begin(), yme.end(), -yme[i]+1) - yme.begin() ;
                xd += i - killme ;
            
        }
            cout<<xd<<endl ;
        }
		
}