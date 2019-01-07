#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int theLoveLetterMystery(char* s){
    long long int i=0,num=0,x=strlen(s);
    long long int j=x-1;
    while(i<x/2)
    {
        if(s[i]!=s[j])
        {
            if(s[i]>s[j])
            {
                num=num+(int)(s[i]-s[j]);
            }
            else
            {
                num=num+(int)(s[j]-s[i]);
            }
        }
        i++;
        j--;
    }
    return num;
}
int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = theLoveLetterMystery(s);
        printf("%d\n", result);
    }
    return 0;
}
