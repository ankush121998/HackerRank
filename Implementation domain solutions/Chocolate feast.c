#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long int n; 
        long long int c; 
        long long int m; 
        scanf("%lld %lld %lld",&n,&c,&m);
        long long int x=n/c;
        if(x==m)
        {
            x++;
            printf("%lld\n",x);
        }
        else if(x>m)
        {
            long long int num=x;
            while(num-m>=0)
            {
           num=num-(m-1);
                x++;
            }
            printf("%lld\n",x);
        }
        else
            printf("%lld\n",x);
    }
    return 0;
}
