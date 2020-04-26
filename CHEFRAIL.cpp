#include <bits/stdc++.h>
#include<cmath>
#define lli long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (lli i=a; i<b; i++)
using namespace std;

lli power(lli x, lli y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 

int main() 
{

    lli t , n , m ;

    cin>>t ;
    while(t--)
    {
        vector< pair<int,int> > xx ;
        vector< pair<int,int> > yy ;
        vector<lli> x ;
        vector<lli> y ;
        vector<lli> product ;
        lli prod ;
        cin>>n>>m ;
        lli temp ;
        lli a , b , c ;
        rep(i,0,n)
        {
            cin>>temp ;
            x.PB(temp) ;
        }
        rep(i,0,m)
        {
            cin>>temp ;
            y.PB(temp) ;
        }
        sort(x.begin(),x.end()) ;
        sort(y.begin(),y.end()) ;
        // rep(i,0,n)
            // cout<<x[i]<<" " ;
        // cout<<endl ;
        // rep(i,0,m)
            // cout<<y[i]<<" " ;
        // cout<<endl ;
        rep(i,0,n)
        {
            rep(j,i+1,n)
            {
                  {
                        // auto it = find(product.begin(), product.end(), (x[i]*x[j]));
                        // if(it==product.end())
                        {
                            xx.PB(MP(x[i],x[j])) ;
                            // product.push_back(x[i]*x[j]) ;
                            
                        }
                  }
            }
        }
        
        
       product.clear() ;
       vector<lli> product1 ;
        
        rep(i,0,m)
        {
            rep(j,i+1,m)
            {
                //   if((y[i]>=0 && y[j]<0) || (y[i]<=0 && y[j]>0))
                  {
                        // auto it = find(product1.begin(), product1.end(), (y[i]*y[j]));
                        // if(it==product1.end())
                        {
                            yy.PB(MP(y[i],y[j])) ;
                            // product1.push_back(y[i]*y[j]) ;
                            
                        }
                  }
            }
        }

        // cout<<"XX"<<endl ;
        // rep(i,0,xx.size())
        // {
        //     cout<<xx[i].first<<" "<<xx[i].second<<" "<<endl ;
        // }
        // // cout<<endl ;
        // cout<<"YY"<<endl ;
        // rep(i,0,yy.size())
        // {
        //     cout<<yy[i].first<<" "<<yy[i].second<<" "<<endl ;
        // }
        // cout<<endl ;
        product1.clear() ;
        product.clear() ;
        // lli a , b , c ;
        lli count = 0 ;
        rep(i,0,xx.size())
        {
            rep(j,0,m)
            {
                // lli p = xx[i].first * xx[i].second * y[j] ;
                // auto it = find(product.begin(), product.end(), p);
                // if(it==product.end())
                {
                    // float m11 = (float)((xx[i].first * xx[i].second)/((float)y[j] * (float)y[j])) ;
                    a = (power((xx[i].second - xx[i].first),2)) ;
                    b = (power(xx[i].first,2) + power(y[j],2)) ;
                    c = (power(xx[i].second,2) + power(y[j],2)) ;
                    // cout<<a<<" "<<b<<" "<<c<<endl ;
                    // if(m11==-1)
                    if(a==b+c || b==a+c || c==a+b)
                    {
                        count+=1 ;
                        // cout<<xx[i].first<<xx[i].second<<y[j]<<endl ;
                    }
                    // product.PB(p) ;
                    // cout<<m11<<" "<<"XX"<<endl ;//m22<<"XX"<<endl ;
                }
            }
        }
        rep(i,0,yy.size())
        {
            rep(j,0,n)
            {
                // lli p1 = yy[i].first * yy[i].second * x[j] ;
                // auto it = find(product1.begin(), product1.end(), p1);
                // if(it==product1.end())
                {
                    // float m1 = (float)((yy[i].first * yy[i].second)/((float)x[j]*(float)x[j])) ;
                    // lli m2 = - (float)(yy[i].second/x[j]) ;
                    // cout<<yy[i].first<<" "<<yy[i].second<<" "<<" "<<x[j]<<endl ;
                    a = (power((yy[i].second - yy[i].first),2)) ;
                    b = (power(yy[i].first,2) + power(x[j],2)) ;
                    c = (power(yy[i].second,2) + power(x[j],2)) ;
                    // if(m1==-1.0)
                    // cout<<a<<" "<<b<<" "<<c<<endl ;
                    if(a==b+c || b==a+c || c==a+b)
                    {
                      count+=1 ;
                    // cout<<yy[i].first<<yy[i].second<<x[j]<<endl ;
                        
                    }
                }
            }
        }
        cout<<count<<endl ;
    }
    return 0; 
}