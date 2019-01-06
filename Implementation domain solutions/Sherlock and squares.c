#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        printf("%d\n",(int)(floor(sqrt(b))-ceil(sqrt(a))+1));
    }
}
