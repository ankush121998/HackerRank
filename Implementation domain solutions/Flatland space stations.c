#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int flatlandSpaceStations(long long int n,long long int m, int* c) {
   long long int i,j,k,num=0;
    if(n==m)
        return 0;
 int a[n];
    for(i=0;i<n;i++)
        a[i]=2147483647;
        for(int i=0; i<m; i++){
            int x = c[i];
            for(int j=0; j<n; j++){
                if(j==x)
                    a[j]=0;
                else if(a[j]>abs(j-x))
                    a[j] = abs(j-x);
            }
        }
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = a[i];
            int j;            
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
                a[j] = a[j - gap];
            a[j] = temp;
        }
    }
       //printf("%d",a[n-1]);
    return a[n-1];
}

int main() {
    long long int n; 
    long long int m; 
    scanf("%lli %lli", &n, &m);
    int *c = malloc(sizeof(int) * m);
    for (int c_i = 0; c_i < m; c_i++) {
       scanf("%i",&c[c_i]);
    }
    long long int result = flatlandSpaceStations(n, m, c);
   printf("%lld\n", result);
    return 0;
}
