#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,j,q,k,p,m,h=0;
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    for(m=i;m<=j;m++)
    {
        int n=0;
        p=m;
        while(p)
        {
            q=p%10;
            n=n*10+q;
            p=p/10;
        }
        if((abs(m-n))%k==0)
            h++;
    }
     printf("%d",h);   
    return 0;
}
