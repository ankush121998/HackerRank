#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long double t; 
    scanf("%Lf",&t);
    long double x=3;
    while(x<t)
    {
        t=t-x;
        x*=2;
    }
    printf("%0.0Lf",x-t+1);
    return 0;
}
