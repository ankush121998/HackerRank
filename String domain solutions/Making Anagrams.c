#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int makingAnagrams(char* s1, char* s2){
    int i,j,num=0,arr[26],arr1[26],arr3[26];
    for(i=0;i<26;i++)
    {
        arr[i]=0;
        arr1[i]=0;
    }
    for(i=0;i<strlen(s1);i++)
    {
        arr[s1[i]-97]++;
    }
    for(i=0;i<strlen(s2);i++)
        arr1[s2[i]-97]++;
    for(i=0;i<26;i++)
    {
       if(arr[i]!=arr1[i])
           num=num+abs(arr[i]-arr1[i]);
    }
    return num;
}

int main() {
    char* s1 = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s1);
    char* s2 = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s2);
    int result = makingAnagrams(s1, s2);
    printf("%d\n", result);
    return 0;
}
