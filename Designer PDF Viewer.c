#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int h[26];
    for(int h_i = 0; h_i < 26; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);
    int len=strlen(word);
    if(len==0)
        exit(0);
    int temp=h[word[0]-97];
    for(int i=1;i<len;i++)
        {
        if(temp<h[word[i]-97])
            temp=h[word[i]-97];
    }
    printf("%d",temp*len);
    return 0;
}
