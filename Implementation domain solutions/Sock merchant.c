#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sockMerchant(int n, int* ar) {
    // Complete this function
    int i,j,num=0,m=0,x=0,num1=0;
    int arr[1000000];
    for(int gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i+=1){
     int temp=ar[i];
       for(j=i;j>=gap&&ar[j-gap]>temp;j-=gap)
           ar[j]=ar[j-gap];
        ar[j]=temp;
    }
    }
    for(i=0;i<n;i++)
    {
        int num=ar[i];
        int k=i;
        for(j=i;j<n;j++)
        {
            if(num==ar[j])
                x++;
            if(x%2==0&&num==ar[j])
                num1++;
        }
        i=x+k-1;
        x=0;
    }
    return num1;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    return 0;
}
