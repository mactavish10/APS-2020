#include <iostream>
using namespace std;


int main()
{
    int n , m = 5 ;
    int p = 0 ;
    int tp = 0 ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        p=(m/2);
        tp=tp+p;
        m=p*3;
    }
    cout<<tp;
    return 0;
}
