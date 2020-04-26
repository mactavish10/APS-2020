#include <bits/stdc++.h>
#define int long long int
#define MP make_pair
#define pb push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define endl "\n"
#define MAX 100009 
using namespace std;

//code from https://www.geeksforgeeks.org/count-sub-arrays-whose-product-is-divisible-by-k/

vector<int> prod ;

int SubArraySum(vector<int> arr, int n) 
{ 
    int result = 0,temp=0; 
  
    // Pick starting point 
    for (int i=0; i <n; i++) 
    { 
        // Pick ending point 
        temp=1; 
        for (int j=i; j<n; j++) 
        { 
            // sum subarray between current 
            // starting and ending points 
            temp*=arr[j]; 
            prod.pb(temp) ;
        } 
        
    } 
    // return result ; 
} 

// Vector to store primes 
vector<int> primes; 

// k_cnt stores count of prime factors of k 
// current_map stores the count of primes 
// in the current sub-array 
// cnts[] is an array of maps which stores 
// the count of primes for element at index i 
unordered_map<int, int> k_cnt, current_map; 

int odd_sub(vector<int> arr, int n)
{
    int len = 0, tot = 0 ;
    rep(i,0,n)
    {
        if(arr[i]&1!=0)
            len+=1 ;
        else
        {
            tot+= ((len+1)*len)/2 ;
            len = 0 ;
        }
    }
    tot+= ((len+1)*len)/2 ;
    return tot ;
}



// Function to store primes in 
// the vector primes 
int countSubarrays(vector<int> arr, int n, int k) 
{ 
     k_cnt.clear() ;
	 current_map.clear() ;
	 unordered_map<int, int> cnts[MAX];
    vector<int> k_primes{2,2} ;

	for (auto num : k_primes) { 
		k_cnt[num]++; 
	} 

	// Two pointers initialized 
	int l = 0, r = 0; 

	int ans = 0; 

	while (r < n) { 

		// Add rth element to the current segment 
		for (auto& it : k_cnt) { 

			// p = prime factor of k 
			int p = it.first; 

			while (arr[r] % p == 0) {
			    if(arr[r]==0)
			        arr[r] = 4 ;
				current_map[p]++; 
				cnts[r][p]++; 
				arr[r] /= p; 
			} 
		} 

		// Check if current sub-array's product 
		// is divisible by k 
		int flag = 0; 
		for (auto& it : k_cnt) { 
			int p = it.first; 
			if (current_map[p] < k_cnt[p]) { 
				flag = 1; 
				break; 
			} 
		} 

		// If for all prime factors p of k, 
		// current_map[p] >= k_cnt[p] 
		// then current sub-array is divisible by k 

		if (!flag) { 

			// flag = 0 means that after adding rth element 
			// segment's product is divisible by k 
			ans += n - r; 

			// Eliminate 'l' from the current segment 
			for (auto& it : k_cnt) { 
				int p = it.first; 
				current_map[p] -= cnts[l][p]; 
			} 

			l++; 
		} 
		else { 
			r++; 
		} 
	} 

	return ans; 
} 


int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	// your code goes here
	int t , n , lolo,c;
	vector<int> arr1 ;
	cin>>t ;
// 	sieve() ;
	while(t--)
	{
	    arr1.clear() ;
	   // cnts[MAX].clear();
	    cin>>n ;
	    int lol = 0 ;
	    rep(i,0,n){
	        cin>>lolo ;
	        arr1.pb(lolo) ;
	    }
	    if(n>1000)
	        cout<<odd_sub(arr1,n)+countSubarrays(arr1,n,4)<<endl ;
	    else
	    {
	        
	        c = 0 ;
	        prod.clear() ;
	        SubArraySum(arr1,n) ;
	         rep(i,0,prod.size())
	        {
	       // cout<<prod[i]<<" " ;
	            if(prod[i]%4==0 or prod[i]&1!=0)
	                c+=1 ;
	        }
	        cout<<c<<endl ;
	    }
	}
	return 0;
}
