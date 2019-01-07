#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* gameOfThrones(char* s){
    int i,j=0,n=0,x=0,num;
    int arr[26],arr1[26];
    for(i=0;i<26;i++)  
        arr[i]=0; 
    for(i=0;i<strlen(s);i++)
        arr[s[i]-97]++;
    for(i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            arr1[j++]=arr[i];
            n++;        
        } 
    }
    for(i=0;i<n;i++)
    {
        if(arr1[i]%2!=0)
            x++;
    }
    if(x==1||x==0)
        return "YES";
    else
        return "NO";
}
int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = gameOfThrones(s);
    printf("%s\n", result);
    return 0;
}
