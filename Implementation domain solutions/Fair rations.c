#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N; 
    scanf("%d",&N);
    int *B = malloc(sizeof(int) * N);
    for(int B_i = 0; B_i < N; B_i++){
       scanf("%d",&B[B_i]);
    }
    int i,j,n=0,num;
    for(i=0;i<N-1;i++)
    {
        if(B[i]%2!=0)
        {
         B[i]=B[i]+1;
            B[i+1]=B[i+1]+1;
            n=n+2;
        }
    }
    for(i=0;i<N;i++)
    {
        if(B[i]%2!=0)
        {num=1;
         break;
        }
        else
            num=0;
    }
    if(num==1)
        printf("NO");
    else
        printf("%d",n);
    return 0;
}
