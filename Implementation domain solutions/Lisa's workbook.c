#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,j=2,k,x=0,num=0,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i-1]);
    }
    for(i=0;i<n;i++)
    {
        num=num+((j-2)/k)+1;
 for(j=1;j<=arr[i];j++)
 {
     x=num+(j-1)/k;
     if(j==x)
         count++;
 }
    }
    printf("%d",count);
    return 0;
}
