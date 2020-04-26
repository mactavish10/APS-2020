#include <bits/stdc++.h>
#define lli long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (lli i=a; i<b; i++)
using namespace std;

long int power(long int x,  int y,  long int p) 
{ 
    long int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or 
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t , n , op , cl , c ;
    string str ;
    
    cin>>t ;
    while(t--)
    {
        // vector<lli> sub_sum ;
        cin>>n ;
        lli sm=0;
        lli q = (n*(n+1))/2 ;
        stack <lli> st;
        cin>>str ;
        rep(i,0,n)
        {
            op = 0 ;
            cl = 0 ;
            c = 0 ;
            rep(j,i,n)
            {
                if(str[j]=='(')
                    op+=1 ;
                else if (str[j]==')')
                    cl+=1 ;
                if ((op<cl) )
                {
                    c+=1;
                    op+=1 ;
                    cl-=1 ;
                }
                if(st.size()>5)
                    sm+=c;
                else
                    st.push(c);
            }
        }
        q = power(q,1000000005,1000000007) ;
        while(!st.empty())
        {
            sm+=st.top();
            st.pop();
        }
        // cout<<sm<<endl;
        // lli s = accumulate(sub_sum.begin(),sub_sum.end(),0) ;
        // cout<<s<<endl ;
        lli res = (sm*q)%(1000000007) ;
        cout<<res<<endl ;
    }
	return 0;
}
