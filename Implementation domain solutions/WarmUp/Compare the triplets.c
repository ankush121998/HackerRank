#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    int sum1 = 0, sum2 = 0;
    if(a0>b0){
        sum1++;
    }else if(b0>a0){
        sum2++;
    }
    
    if(a1>b1){
        sum1++;
    }else if(b1>a1){
        sum2++;
    }
    
    if(a2>b2){
        sum1++;
    }else if(b2>a2){
        sum2++;
    }
    
    printf("%d %d", sum1, sum2);
    return 0;
}
