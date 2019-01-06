#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int s; 
    long int t; 
    scanf("%lld %lld",&s,&t);
   long long int a; 
    long long int b; 
    scanf("%lld %lld",&a,&b);
    long long int m; 
    long long int n; 
    scanf("%lld %lld",&m,&n);
    long long int *apple = malloc(sizeof(long long int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%lld",&apple[apple_i]);
    }
    long long int *orange = malloc(sizeof(long long int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%lld",&orange[orange_i]);
    }
    long long int i,x=0,y=0;
    for(i=0;i<m;i++)
    {
        if((apple[i]+a)>=s&&apple[i]+a<=t)
            x++;
    }
    for(i=0;i<n;i++)
    {
        if((orange[i]+b)<=t&&orange[i]+b>=s)
            y++;
    }
    printf("%lld\n%lld",x,y);
    return 0;
}
