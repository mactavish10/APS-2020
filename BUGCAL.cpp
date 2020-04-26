#include <iostream>
using namespace std;

int main(){
 
 
  int t , a , b , j;
  int z , d = 0 ;
  cin>>t ;
  for(int k=0;k<t;k++)
  {
    j = 0 ;
    z = 1 ;
    d = 0 ;
    cin>>a>>b ;
    while( a!=0 || b!=0 )
    {
      d += ((a%10+b%10)%10)*z ;
      z *= 10 ;
      a = a / 10 ;
      b = b / 10 ;
    }
 
    cout<<d<<endl ;
  }
 
  return 0;
}
 

