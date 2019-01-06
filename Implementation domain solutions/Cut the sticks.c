#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,num,x=0; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i+=1)
        {
            int temp=arr[i];
            for(j=i;j>=gap&&arr[j-gap]>temp;j-=gap)
                arr[j]=arr[j-gap];
            arr[j]=temp;
        }
    }
    while(n!=0)
    {
     for(i=0;i<n;i++)
     {
         if(arr[i]!=0)
         {
             num=arr[i];
             break;
         }
     }
        for(i=0;i<n;i++)
        {
            if(arr[i]>0){    
            arr[i]=arr[i]-num;
            x++;
            }
        }
        if(x==0)
            exit(0);
        printf("%d\n",x);
        x=0;
    }
    return 0;
}
