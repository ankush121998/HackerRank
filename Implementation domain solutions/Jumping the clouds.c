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
    int *str = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&str[c_i]);
    }
    int i,j,x=0;
    for(i=0;i<n-1;)
    {
        if(str[i+1]!=1&&str[i+2]!=1)
        {
            x++;
            i+=2;
        }
        else if(str[i+1]!=1&&str[i+2]==1)
        {
            x++;
            i+=1;
        }
          else if(str[i+1]==1&&str[i+2]!=1)
          {
              x++;
              i+=2;
          }
        else
        {
         if(i==n-1)
             break;
        }
    }
    printf("%d",x);
    return 0;
}
