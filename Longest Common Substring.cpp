#include <iostream>
#include<string.h>
using namespace std;

int max(int a , int b)
{
    if(a>=b)
        return a ;
    else 
        return b ;
}

int main() {
	string str1 , str2 ;
	static int s1[100][100] ;
	int i , j ;
	cin>>str1 ;
	cin>>str2 ;
	for( i = 1 ; i <= str1.size() ; i++)
	{
	    for( j = 1 ; j <= str2.size() ; j++)
	    {
	        if(str1[i-1]==str2[j-1])
	        {
	            s1[i][j]=s1[i-1][j-1]+1 ;
	        }
	        else
	        {
	            s1[i][j] = max(s1[i-1][j],s1[i][j-1]) ;
	        }
	    }
	}
	for(i = 0 ; i <= str1.size() ; i++)
	{
	    for(j=0;j<=str2.size();j++)
	    {
	        cout<<s1[i][j]<<" " ;
	    }
	    cout<<endl ;
	}
	return 0;
}