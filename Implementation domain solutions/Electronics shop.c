#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int getMoneySpent(long long int* keyboards,long long int* drives, long double s,long double n,long double m){
    // Complete this function
    int i,j,x,k=0,num=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         if((keyboards[i]+drives[j])<=s&&keyboards[i]+drives[j]>=num)
         {
          num=keyboards[i]+drives[j];
         }
        }
    }
    if(num!=0&&num<=s)
        return num;
    return -1;
}

int main() {
    long  double s; 
    long  double n; 
    long double m; 
    scanf("%Lf %Lf %Lf", &s, &n, &m);
   long long int *keyboards = malloc(sizeof(long long int) * n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       scanf("%lld",&keyboards[keyboards_i]);
    }
    long long int *drives = malloc(sizeof(long long int) * m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       scanf("%lld",&drives[drives_i]);
    }
   long long int moneySpent = getMoneySpent(keyboards, drives, s,n,m);
    printf("%lld\n", moneySpent);
    return 0;
}
