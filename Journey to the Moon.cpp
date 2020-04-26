#include <bits/stdc++.h>
#define lli long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (lli i=a; i<b; i++)
using namespace std;
vector <long long int >countries[100000];

vector<lli> g[1000000];
bool visited[1000000] ;
lli c = 0 , var = 0 ;
vector<lli> country[10000] ;
void dfs(long long int u)
{
    if(visited[u])
        return ;
    visited[u]=1;
    var+=1 ;
    for(auto v: g[u])
    {
        if(!visited[v]) 
            dfs(v); 
    }
}
int main()
{
lli n , m , u , v , start , end,total ;
cin>>n>>m ;
while(m--)
{
    cin>>u>>v ;
    g[u].PB(v) ;
    g[v].PB(u) ;
}

total = n*(n-1)/2;
rep(i,0,n)
{
    var=0;
    dfs(i);
    total-=var*(var-1)/2;
}
    cout<<total<<endl;
    return 0;
}
