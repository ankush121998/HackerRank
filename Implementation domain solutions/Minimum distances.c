#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *A = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&A[i]);
    }
    int i,j,k=0,arr[n];
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i!=j)
            {
                if(A[i]==A[j])
                {
                    arr[k]=abs(i-j);
                k++;
                }
            }
        }
    }
    if(k>0)
    {
    int temp=arr[0];
    for(i=1;i<k;i++)
    {
        if(temp>arr[i])
            temp=arr[i];
    }
      printf("%d",temp);
    }
    else printf("-1");
    return 0;
}
