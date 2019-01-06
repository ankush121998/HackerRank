#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char *s =(char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    char arr[200000],arr1[10000][10000];
    int i,j=0,k=0;
  /*  for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
            arr[j++]=s[i];
    }*/
     k=ceil(sqrt(strlen(s)));
    j=floor(sqrt(strlen(s)));
    for(i=0;i<k;i++)
    {
        for(j=i;j<strlen(s);j=j+k)
            printf("%c",s[j]);
        printf(" ");
    }
    return 0;
}
