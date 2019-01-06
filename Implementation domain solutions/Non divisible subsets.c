#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int i;
    int a[n];
    int mod[k];
    for (i=0;i<k;i++)
        mod[i]=0;
    for (i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        mod[a[i]%k]++;
    }
    
    int p=0;
    if (mod[0]>=1) p++;
    if (mod[k/2]>=1 && k%2==0) p++;
    
    for (i=1;i<=((k-1)/2);i++){
        //printf("Comparing:%d,%d\n",mod[i],mod[k-i]);
        int max = (mod[i]>mod[k-i])?mod[i]:mod[k-i];
        p += max;
    }
    printf("%d",p);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
