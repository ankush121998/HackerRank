#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int minSteps(int n, char* B){
    // Complete this function
    int i,num=0;
    for(i=0;i<n;i++)
    {
        if(B[i]=='0'&&B[i+1]=='1'&&B[i+2]=='0')
        {num++;
         B[i+2]='1';
        }
    }
    return num;
}

int main() {
    int n; 
    scanf("%d",&n);
    char* B = (char *)malloc(512000 * sizeof(char));
    scanf("%s",B);
    int result = minSteps(n, B);
    printf("%d\n", result);
    return 0;
}
