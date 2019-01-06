#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i=0,j;
    long long int n; 
    int k; 
    int q; 
    scanf("%lld %d %d",&n,&k,&q);
    int x=k%n;
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
   for (i = 0; i < q; i++) {
        int m;
       scanf("%d",&m);
        printf("%d\n",a[(n-x+m)%n]);
		}
    return 0;
}
