#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int getTotalX(int n, int* a, int m, int* b) {
int i,j,num=a[n-1],x=0,t;
    for(i=0;i<100000000;i++)
    {
        for(j=0;j<n;j++)
        {
            if((num%a[j])==0)
                t=1;
            else
            {
                t=0;
             break;
            }
        }
        for(j=0;j<m;j++)
        {
            if(t==0)
                break;
            if((b[j]%num)==0)
                t=1;
            else
            {
                t=0;
                break;
            }
        }
        if(t==1)
        {
            x++;
        }
        ++num;
    }
    return x;
}

int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for (int b_i = 0; b_i < m; b_i++) {
       scanf("%i",&b[b_i]);
    }
    int total = getTotalX(n, a, m, b);
    printf("%d\n", total);
    return 0;
}
