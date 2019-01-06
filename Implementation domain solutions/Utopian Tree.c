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
        int n;
        scanf("%d",&n);
        int i,k=1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            k=2*k;
        else
            k=k+1;
    }
    printf("%d\n",k);
    }
    return 0;
}
