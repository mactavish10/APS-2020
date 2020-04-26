#include<bits/stdc++.h>
using namespace std ; 
int main()
{
 int t,i,rev,n;
 cin>>t ;
 int a[t];
 for(i=0;i<t;i++)
  cin>>a[i] ;
 for(i=0;i<t;i++)
 {
  rev=0;
  n=a[i];
  while(n!=0)
  {
   rev = rev*10 + (n%10) ;
   n /= 10;
  }
  if(rev==a[i])
   cout<<"wins"<<endl ;
  else
   cout<<"losses"<<endl ;
 }
}