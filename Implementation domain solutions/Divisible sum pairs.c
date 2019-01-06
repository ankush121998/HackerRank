#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int divisibleSumPairs(int n, int k , int* ar) {
    // Complete this function
    int i,j,num=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i&&i<j)
            {
                if((ar[i]+ar[j])%k==0)
                    num++;
            }
        }
    }
    return num;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = divisibleSumPairs(n,k,ar);
    printf("%d\n",result);
    return 0;
}
