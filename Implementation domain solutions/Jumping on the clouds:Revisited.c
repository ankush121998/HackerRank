#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *arr = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&arr[c_i]);
    }
    int i,num=100;
    for(i=0;i<n;i=k+i)
     {
        if(arr[i]==0)
        {
            num=num-1;
        }
        else
        {
            num=num-3;
        }    
    }
    printf("%d",num);
    return 0;
}
