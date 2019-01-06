#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i; 
    int k; 
    scanf("%d %d",&n,&k);
    int *height = malloc(sizeof(int) * n);
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
    }
    int temp=height[0];
    for(i=0;i<n;i++)
    {
        if(height[i]>temp)
          temp=height[i];  
    }
    if(temp>k)
        printf("%d",temp-k);
    else
        printf("0");
    return 0;
}
