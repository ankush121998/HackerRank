#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s",s);
        char arr[]="hackerrank";
        // your code goes here
        int j,i=0,n,num=0;
        n=strlen(s);
    for(j=0;j<n;j++)
    {
        if(arr[i]==s[j]){
            num=num+1;
            i++;
        }
    }
        if(num==10)
        printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
