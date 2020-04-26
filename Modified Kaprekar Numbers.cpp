#include<bits/stdc++.h>

using namespace std ;

int digits(int sq)
{
	int count  = 0 ;
	while(sq!=0)
	{
		sq/=10 ;
		count++ ;
	}
	return count ;
}

int main()
{
	int p1,p2 ;
	long long int num , a = 0 , sq , l , r , p ,d ,i , j  , q , rem;
	long long int low , high ,flag = 0 ;
	//cout<<"Enter the number : " ;
	//cin>>num ;
	//cout<<"Enter the lower and upper limit : "<<endl ;
	cin>>low>>high ;
	for(num = low ; num <= high ; num++ )
	{
		sq = num*num ;
		d = digits(sq) ;
		if(d % 2==0)
		{
			l = d/2 ;
			r = d/2 ;
		}
		if(d%2!=0) 
		{
			l = d/2 ;
			r = l+1 ;
		}
	//cout<<l<<endl;
	//cout<<r<<endl ;
		p1 = pow(10,l) ;
		p2 = pow(10,r) ;
	//cout<<"p1 = "<<p1<<endl ;
	//cout<<"p2 = "<<p2<<endl ;
		if(l==r)
		{
			q = (num*num)/p1 ;
			rem = (num*num) % p2 ;
			//cout<<q<<endl;
			//cout<<rem<<endl ;
		}
		if(l!=r)
		{
			q = (num*num)/p2 ;
			rem = (num*num) % p2 ;
			//cout<<q<<endl;
			//cout<<rem<<endl ;
		}
		if(q+rem==num && rem!=0)
		{
			cout<<num<<" " ;
            flag = 1 ;
		}
		//else cout<<"INVALID RANGE"<<endl ;
}
    if (flag != 1)
    {
        cout<<"INVALID RANGE"<<endl ;
    }
	//getch();
	return 0 ;
}