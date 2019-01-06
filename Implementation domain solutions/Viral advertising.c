#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int m=5;
    int i,p,k=0;
    for(i=0;i<n;i++)
    {
        p=floor(m/2);
        k=k+p;
            m=floor(m/2)*3;
    }
    printf("%d",k);
    return 0;
}
