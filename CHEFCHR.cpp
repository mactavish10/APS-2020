#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[500000];
	long long int i , t , n , c ;
	cin>>t ;
	while(t--)
	{
	    n = 0 ;
	    //getline(cin, str);
	    cin>>str ;
	    c = strlen(str) ;
	    for( i = 0 ; i < c ; i++ )
	    {
	        if((str[i] + str[i+1] + str[i+2] + str[i+3]) == 406 && (str[i] * str[i+1] * str[i+2] * str[i+3]) == 106069392)
	        {
	            n++ ;
	        }
	    }
	    if(n==0)
	        cout<<"normal"<<endl ;
	   else 
	        cout<<"lovely "<<n<<endl ;
	}
	return 0;
}