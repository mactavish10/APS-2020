#include <bits/stdc++.h>
#define int long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define endl "\n"
using namespace std;
 
int32_t main()
{
	int t , ytho ;
	cin >> t;
	while(t--)
	{
	    ytho = 0;
		vector <int> lol ;
		string s;
		cin >> s;
		s.insert(s.begin(), 'R'); 
		s.insert(s.end(), 'R');
 
		rep(i,0,s.size())
			if (s[i] == 'R'){
			 //   cout<<i<<endl ;
			    lol.push_back(i);
			}
 
		rep(i,0,lol.size()-1)
		{
			if ((lol[i + 1] - lol[i]) > ytho)
				ytho = lol[i + 1] - lol[i];
		}
		cout<<ytho<<endl ;
	}
}