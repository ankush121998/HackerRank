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
    int arr1[n];
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int i,j,num=0,k=1,t=0;
for(int gap=n/2;gap>0;gap/=2)
{
    for(i=gap;i<n;i+=1)
    {
        int temp=a[i];
        for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)
            a[j]=a[j-gap];
        a[j]=temp;
    }
}
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(abs(a[i]-a[j])<=1&&i!=j)
            {
                k++;
            }
        }
        if(k>=t)
                t=k;
        k=1;
    }
    printf("%d",t);
    return 0;
}
