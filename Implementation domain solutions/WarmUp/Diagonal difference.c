#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,x=0,y=0,num; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    }
    for(int a_i=0;a_i<n;a_i++)
    {
        for(int a_j=0;a_j<n;a_j++)
        {
            if(a_i==a_j)
            {
                x=x+a[a_i][a_j];
            }
        }
    }
    for(int a_i=0;a_i<n;a_i++)
    {
        for(int a_j=0;a_j<n;a_j++)
        {
            if(a_i+a_j==n-1)
            {
                y=y+a[a_i][a_j];
            }
        }
    }
    if(x>y)
    num=x-y;
    else
        num=y-x;
    printf("%d",num);
    return 0;
}
