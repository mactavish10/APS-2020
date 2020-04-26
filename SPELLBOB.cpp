#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t , i ;
	char ff[3] , bf[3] ;
	//int cf[3] , cb[3];
	cin>>t ;
	while(t--)
	{
	    int flag = 1 ;
	    int b = 0 , o = 0 ;
	    cin>>ff ;
	    cin>>bf ;
	    for( i = 0 ; i < 3 ; i++ )
	    {
	        if(ff[i]!='o' && bf[i]!='b' && ff[i]!='b' && bf[i]!='o')
	        {
	            flag = 0 ;
	            break ;
	        }
	        if(ff[i]=='b' || bf[i]=='b')
	            b++ ;
	        if(ff[i]=='o' || bf[i]=='o')
	        {
	            o++ ;
	        }
	    }
	    //cout<<"B = "<<b<<" O = "<<o<<endl ;
	        //cout<<cf[i]<<cb[i]<<endl ;
	        if(b>=2 && o>=1 && flag==1)
	        {
	            cout<<"yes"<<endl ;
	        }
	        else 
	        {
	            cout<<"no"<<endl ;
	        }
    }
	return 0 ;
}