#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* appendAndDelete(char* s, char* t, int k) {
    long long int i,j,num=0;
    if(strcmp(s,t)==0)
    {
        if(k=(strlen(s)+strlen(t)+1))
            return "Yes";
    }
    else
    {
        i=0;
       while(s[i]==t[i])
        {
           i++;
       num+=2;
       }
            }
    if(k>=(strlen(s)+strlen(t)-num)&&(strlen(s)>=strlen(t)||s[strlen(s)-1]==t[strlen(t)-1]))
        return "Yes";
    return "No";
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s", t);
    int k; 
    scanf("%i", &k);
    int result_size;
    char* result = appendAndDelete(s, t, k);
    printf("%s\n", result);
    return 0;
}
