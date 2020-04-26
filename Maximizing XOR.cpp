#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int l , r , i , j ;
    cin>>l>>r ;
    vector<long long int> x ;
    for(i = l ; i <=r ; i++)
    {
        for(j=l;j<=r;j++)
            x.push_back(i^j) ;
    }
    sort(x.begin() , x.end()) ;
    cout<<x[x.size()-1]<<endl ;
    return 0 ;
}
