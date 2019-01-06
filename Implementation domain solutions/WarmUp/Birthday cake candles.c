#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n,int* ar) {
    // Complete this function
    int i,j,num=0,x=ar[0];
    for(i=1;i<n;i++)
    {
        if(x<ar[i])
            x=ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(x==ar[i])
            num++;
    }
    return num;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, ar);
    printf("%d\n", result);
    return 0;
}
