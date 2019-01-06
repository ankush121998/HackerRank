#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n,int* arr, int d, int m){
  int i,j,k=0,num=0;
    for(i=0;i<=n-m;i++)
    {
       for(j=i;j<i+m;j++)
       {
           num=num+arr[j];
       }
        if(num==d)
        {
            k++;
        }
        num=0;
    }
    return k;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    int result = solve(n, s, d, m);
    printf("%d\n", result);
    return 0;
}
