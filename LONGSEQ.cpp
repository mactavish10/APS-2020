#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,a,b;
    char arr[100001];
    scanf("%d",&t);
    while(t--)
    {
        a=b=0;
        scanf("%s",arr);
        for(i=0 ; i<strlen(arr) ; i++ )
        {
            if(arr[i]=='0')
                a++;
            else
                b++;
        }
        if(a==1 || b==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}