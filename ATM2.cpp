#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	
	vector<int> arr ;
	int t , n , k , i , temp , n1;
	cin>>t ;
	while(t--)
	{
	    vector<string> str ;
	    cin>>n>>k ;
	    for(i = 0 ; i < n ; i++)
	    {
	        cin>>temp ;
	        arr.push_back(temp) ;
	        n1 = k - temp ;
	        if(n1>=0)
	        {
	            k-=temp ;
	            str.push_back("1") ;
	        }
	        else
	            str.push_back("0") ;
	    }
	    for (auto it : str)
	        cout<<it ;
	    cout<<endl ;
	}
	return 0;
}
