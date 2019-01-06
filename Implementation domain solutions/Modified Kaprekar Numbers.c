#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    long int n,m,r,f;
    int flag = 0;
    scanf("%ld\n%ld",&n,&m);
    for(long int i=n;i<=m;i++){
        long int sum;
        long int a = 0;
        long int k = i;
        while(k>0){
            k/=10 ; 
            ++a;
        }
       long int p = i * i;
        long int g = pow(10,a);
        sum = p%g + p/g;
        if(sum == i){
            printf("%ld ",sum);
            flag++;
        }
    }
    if(flag == 0)
        printf("INVALID RANGE");       
    return 0;
}
