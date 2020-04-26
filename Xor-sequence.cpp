#include<bits/stdc++.h>
using namespace std;
long long uptonxor(long long n)
{
    int a=n%8;
    if(a==0 || a==1)
        return n;
    else if(a==2 || a==3)
        return 2;
    else if(a==4 || a==5)
        return n+2;
    return 0;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        long long ans;
        ans=uptonxor(l-1)^uptonxor(r);
        cout<<ans<<endl;
    }
    return 0;
}
