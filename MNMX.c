#include <stdio.h>
 
int main()
{
    int t , n , i ;
    scanf("%d",&t) ;
    while(t--)
    {
        scanf("%d",&n) ;
        int a[n] , index=-1 ;
        long long min=100000;
        for( i = 0; i < n ; i++ )
        {
            scanf("%d",&a[i]);
            if(a[i]<=min)
            {
                min=a[i];
                index=i;
            }
        }
        printf("%lld\n",(n-1)*min);
    }
    return 0;
}