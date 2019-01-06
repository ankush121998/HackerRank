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
        long long b; 
        long long w; 
        scanf("%lld %lld",&b,&w);
        long long x; 
        long long y; 
        long long z; 
        scanf("%lld %lld %lld",&x,&y,&z);
        if(x==y&&y==z)
            printf("%lld\n",b*x+w*y);
        if(x>=y&&x>z)
        {
            long long int num=w*y+b*(y+z);
            if(num<(w*y+x*b))
            printf("%lld\n",w*y+b*(y+z));
            else
                printf("%lld\n",w*y+x*b);
        }
        //if(x==y&&x>z)
           // printf("%lld\n",x*b+w*y);
        if(y>x&&y==z)
            printf("%lld\n",b*x+w*y);
        if(y>x&&y>z)
        {
            long long int num=b*x+w*(x+z);
                if(num<(b*x+w*y))
            printf("%lld\n",num);
            else
                printf("%lld\n",b*x+w*y);
            
        }
        if(x<z&&y<z)
            printf("%lld\n",b*x+w*y);
    }
    return 0;
}
