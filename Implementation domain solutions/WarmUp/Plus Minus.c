#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float x=0,y=0,z=0; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for( int arr_i=0;arr_i < n; arr_i++)
    {
        if(arr[arr_i]>0)
            x++;
        if(arr[arr_i]<0)
            y++;
        if(arr[arr_i]==0)
            z++;
    }
    printf("%f\n%f\n%f",x/n,y/n,z/n);
    return 0;
}
