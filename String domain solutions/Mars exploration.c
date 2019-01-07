#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){ 
    int i,j,count,num=0;
           char s[100000]="SOS";
    char arr[3]="SOS";
    int p=3;
    char* S = (char *)malloc(10240 * sizeof(char));
    scanf("%s",S);
    int n=strlen(S);
   for(i=1;i<n/3;i++)
   {
       for(j=0;j<3;j++)
       {
           s[p]=arr[j];
           p++;
       }
   }
    for(i=0;i<n;i++)
    {
        if(S[i]!=s[i])
            num++;
    }
    printf("%d ",num);
    return 0;
}
