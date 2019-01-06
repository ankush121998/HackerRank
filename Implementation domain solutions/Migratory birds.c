#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n, int* ar) {
    // Complete this function
    int i,j,x=0,num=0,k=0,c,m;
    for(int gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i+=1)
        {
            int temp=ar[i];
            for(j=i;j>=gap&&ar[j-gap]>temp;j-=gap)
                ar[j]=ar[j-gap];
            ar[j]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        num=ar[i];
       for(j=i;j<n;j++)
       {
           if(num==ar[j])
           {
               x++;
               m=j;
           }
       }
                   if(x>k)
                   {
                       k=x;
                       c=ar[m];
                   }
        i=m;
        x=0;
    }
    return c;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n, ar);
    printf("%d\n", result);
    return 0;
}
