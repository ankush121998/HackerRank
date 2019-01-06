#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    int x,i=0,y,num=0,l; 
    scanf("%d",&t);
    int arr[t]; 
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
 arr[i]=n;
        i++;
    }
for(i=0;i<t;i++)
{
   x=l=arr[i];
    while(l)  
    {
        y=l%10;
        if(y!=0)
        {
        if(x%y==0)
            num++;
        }
            l=l/10;
    }
    printf("%d\n",num);
    num=0;
}
    return 0;
}

