#include <bits/stdc++.h>
#define int long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (int i=a; i<b; i++)
#define endl "\n"
using namespace std;

// bool cknc[1005][1005] ;
int n ;

// A DFS based recursive function 
// that returns true if a matching 
// for vertex u is possible 
bool bpm(bool cknc[10005][10005] , int u, 
		bool seen[], int matchR[]) 
{ 
	// Try every job one by one 
	for (int v = 1; v <= n; v++) 
	{ 
		// If applicant u is interested in 
		// job v and v is not visited 
		if (cknc[u][v] && !seen[v]) 
		{ 
			// Mark v as visited 
			seen[v] = true; 

			// If job 'v' is not assigned to an 
			// applicant OR previously assigned 
			// applicant for job v (which is matchR[v]) 
			// has an alternate job available. 
			// Since v is marked as visited in 
			// the above line, matchR[v] in the following 
			// recursive call will not get job 'v' again 
			if (matchR[v] < 0 || bpm(cknc ,matchR[v], 
									seen, matchR)) 
			{ 
				matchR[v] = u; 
				return true; 
			} 
		} 
	} 
	return false; 
} 

// Returns maximum number 
// of matching from M to N 
void maxBPM(bool cknc[10005][10005]) 
{ 
	// An array to keep track of the 
	// applicants assigned to jobs. 
	// The value of matchR[i] is the 
	// applicant number assigned to job i, 
	// the value -1 indicates nobody is 
	// assigned. 
	int matchR[10005]; 

	// Initially all jobs are available 
	memset(matchR, -1, sizeof(matchR)); 

	// Count of jobs assigned to applicants 
	int result = 0; 
	for (int u = 1; u <= n; u++) 
	{ 
		// Mark all jobs as not seen 
		// for next applicant. 
		bool seen[1000]; 
		memset(seen, 0, sizeof(seen)); 

		// Find if the applicant 'u' can get a job 
		if (bpm(cknc , u, seen, matchR)) 
			result++; 
		
	} 
	cout<<n-result<<endl ;
	int lmfao[10005] ;
	memset(lmfao,0,sizeof(lmfao)) ;
	rep(i,1,n+1)
	{
	    if(matchR[i]!=-1)
	        lmfao[matchR[i]] = i ;
	}
	rep(i,1,n+1)
	    cout<<lmfao[i]<<" " ;
	cout<<endl ;
} 



int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	// your code goes here
	int t , k ;
	cin>>t ;
	bool cknc[10005][10005] ;
	while(t--)
	{
	    cin>>n>>k ;
	    
	    memset(cknc , 0 , sizeof(cknc)) ;
	    rep(i,1,n+1)
	    {
	        rep(j,1,n+1)
	        {
	            if(i!=j)
	                cknc[i][j] = 1 ;
	           // else
	           //     cknc[i][j] = 0 ;
	        }
	            
	    }
	   // int jake , amy ;
	   int arr[9000] ;
	   int k1 = k ;
	    while(k1--)
	    {
	        rep(i,0,n)
	            cin>>arr[i] ;
	       for(int i = n-1 ; i >= 0 ; i--)
	       {
	            for(int j=i; j>=0; j--)
	                cknc[arr[i]][arr[j]] = 0 ;
	       }
	            
	    }
	   // rep(i,0,n)
	   // {
	   //     rep(j,0,n)
	   //         cout<<cknc[i][j]<<" " ;
	   //     cout<<endl ;
	   // }
	    maxBPM(cknc) ;
	}
	return 0;
}
