#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int bonAppetit(long int n, int k, int* ar) {
    // Complete this function
    int i,j;
    long int num=0;
    for(i=0;i<n;i++)
    {
        if(i!=k)
            num=num+ar[i];
    }
    return num;
}

int main() {
   long int n; 
    int k; 
    scanf("%ld %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int b; 
    scanf("%i", &b);
    int result = bonAppetit(n, k, ar);
    if((result/2)<b)
    {int x=b-(result/2);
    printf("%d\n", x);
    }
    else 
        printf("Bon Appetit");
    return 0;
}
