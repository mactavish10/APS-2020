#include <iostream>
#include<iomanip>
#include<cstdio>
#include<stdlib.h>
using namespace std;

int main() {
	long long int t , n , i ;
	double *p , *q , *d , *p1 , *p2 , *l , *tot_l , res = 0 ;
	cin>>t ;
	while(t--)
	{
	    res = 0 ;
	    cin>>n ;
	    p = new double[n] ;
	    q = new double[n] ;
	    d = new double[n] ;
	    p1 = new double[n] ;
	    p2 = new double[n] ;
	    l = new double[n] ;
	    tot_l = new double[n] ;
	    for(i=0;i<n;i++)
	    {
	            cin>>p[i]>>q[i]>>d[i] ;
	            if(p[i]>=1 && p[i]<=100 && q[i]>=1 && q[i]<=100 && d[i]>=0 && d[i]<=100)
	            {
        	        p1[i] = ((0.01*d[i])*p[i]) + p[i] ;
        	        p2[i] = p1[i] - ((0.01*d[i])*p1[i]) ;
        	        l[i] = p[i] - p2[i] ;
        	        tot_l[i] = l[i]*q[i] ;
        	        res = res + tot_l[i] ;
	            }
	            else exit(1) ;
	    }
	    printf("%f\n",res) ;
	}
	return 0;
}