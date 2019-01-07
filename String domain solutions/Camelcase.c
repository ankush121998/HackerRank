#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(100240 * sizeof(char));
    scanf("%s",s);
    int i,j,n=0;
  j=strlen(s);
    for(i=0;i<j;i++)
    {
        if(i==0)
            
            n++;
        if(s[i]>=65&&s[i]<=90)
            n++;
    }
    printf("%d",n);
    return 0;
}
