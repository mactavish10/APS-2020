#include <bits/stdc++.h>
// #define int long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define endl "\n"
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	// your code goes here
	int t , n , s , arr[100001] , brr[100001];
	cin>>t>>s ;
	while(t--)
	{
	    set<int> wazzzzaaaa ;
	    cin>>n ;
	    rep(c,0,n)
	        cin>>arr[c] ;
	    rep(c,0,n)
	        cin>>brr[c] ;
	    if(*min_element(arr,arr+n) >= *min_element(brr,brr+n))
	    {
	        cout<<"NO"<<endl ;
	        continue ;
	    }
	    set <int, greater <int> > gquiz1;         
  
    // insert elements in random order 
    gquiz1.insert(40); 
    gquiz1.insert(30); 
    gquiz1.insert(60); 

	    sort(arr,arr+n) ;
	    sort(brr,brr+n) ;
	    wazzzzaaaa.insert(*min_element(arr,arr+n)) ;
	    wazzzzaaaa.insert(*min_element(brr,brr+n)) ;
	    int flag = 0 ;
	    rep(i,1,n)
	    {
	       // it = find(wazzzzaaaa.begin(), wazzzzaaaa.end(), a[i]); 
	        if(arr[i]<brr[i] and wazzzzaaaa.find(arr[i])!=wazzzzaaaa.end())
	        {
	            wazzzzaaaa.insert(arr[i]) ;
	            wazzzzaaaa.insert(brr[i]) ;
	        }
	        else
	        {
	            flag = 1 ;
	            break ;
	        }
	    }
     gquiz1.insert(20); 
    gquiz1.insert(50); 
    gquiz1.insert(50); // only one 50 will be added to the set 
    gquiz1.insert(10); 
	    if(flag)
	        cout<<"NO"<<endl ;
	    else 
	        cout<<"YES"<<endl ;
	 }
	 
	return 0;
}