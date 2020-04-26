#include <bits/stdc++.h>
#define int long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define endl "\n"
using namespace std;
 
int comp_func(string X, string Y) 
{ 
    // first append Y at the end of X 
    string XY = X.append(Y); 
  
    // then append X at the end of Y 
    string YX = Y.append(X); 
  
    // Now see which of the two formed numbers is greater 
    return XY.compare(YX) > 0 ? 1: 0; 
} 
 
int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	// your code goes here
	int t , n ;
    string ip ;
    cin>>n ;
    vector<string> arr ;
    rep(i,0,n)
    {
        cin>>ip ;
        // if(ip > 9)
        // {
            // while(ip)
            // {
                // int y = ip%10 ;
                // arr.PB(y) ;
                // ip/=10 ;
            // }
        // }
        // else
        // {
            arr.PB(ip) ;
        // }
    }
        
    sort(arr.begin(),arr.end(),comp_func) ;
    rep(i,0,n)
        cout<<arr[i] ;
    cout<<endl ;
	return 0;
}