#include <stdio.h>

int main(void) {
    int t , a , b ;
    scanf("%d",&t) ;
    while(t--)
    {
        scanf("%d%d",&a,&b) ;
        if(a==1 && b==1)
        {
        printf("49\n") ;
        printf("2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n6 2\n5 3\n4 2\n3 3\n2 2\n1 3\n2 4\n3 3\n4 4\n5 3\n6 4\n7 3\n8 4\n7 5\n6 4\n5 5\n4 4\n3 5\n2 4\n1 5\n2 6\n3 5\n4 6\n5 5\n6 6\n7 5\n8 6\n7 7\n6 6\n5 7\n4 6\n3 7\n2 6\n1 7\n2 8\n3 7\n4 8\n5 7\n6 8\n7 7\n8 8\n") ;}
        else if(a==b)
        {
            printf("50\n") ;
            printf("1 1\n2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n6 2\n5 3\n4 2\n3 3\n2 2\n1 3\n2 4\n3 3\n4 4\n5 3\n6 4\n7 3\n8 4\n7 5\n6 4\n5 5\n4 4\n3 5\n2 4\n1 5\n2 6\n3 5\n4 6\n5 5\n6 6\n7 5\n8 6\n7 7\n6 6\n5 7\n4 6\n3 7\n2 6\n1 7\n2 8\n3 7\n4 8\n5 7\n6 8\n7 7\n8 8\n") ;
        }
        else if(a>b)
        {
            printf("51\n") ;
            while(a!=b)
            {
                a-=1 , b+=1 ;
            }
            // a = a - (a-b) ;
            printf("%d %d\n",a,b) ;
            printf("1 1\n2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n6 2\n5 3\n4 2\n3 3\n2 2\n1 3\n2 4\n3 3\n4 4\n5 3\n6 4\n7 3\n8 4\n7 5\n6 4\n5 5\n4 4\n3 5\n2 4\n1 5\n2 6\n3 5\n4 6\n5 5\n6 6\n7 5\n8 6\n7 7\n6 6\n5 7\n4 6\n3 7\n2 6\n1 7\n2 8\n3 7\n4 8\n5 7\n6 8\n7 7\n8 8\n") ;
        }
        else if(a<b)
        {
            printf("51\n") ;
            while(a!=b)
            {
                a+=1 , b-=1 ;
            }
            // a = a - (a-b) ;
            printf("%d %d\n",a,b) ;
            printf("1 1\n2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n6 2\n5 3\n4 2\n3 3\n2 2\n1 3\n2 4\n3 3\n4 4\n5 3\n6 4\n7 3\n8 4\n7 5\n6 4\n5 5\n4 4\n3 5\n2 4\n1 5\n2 6\n3 5\n4 6\n5 5\n6 6\n7 5\n8 6\n7 7\n6 6\n5 7\n4 6\n3 7\n2 6\n1 7\n2 8\n3 7\n4 8\n5 7\n6 8\n7 7\n8 8\n") ;
        }
    }
	return 0;
}

