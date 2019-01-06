#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int *h = malloc(sizeof(int) * 26);
    for(int h_i = 0; h_i < 26; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);
    int i,j=0,num=0,x=0;
    char ac=word[0];
    for(i=0;i<strlen(word);i++)
    {
        int a=word[i];
        if(num<h[a-97])
            num=h[a-97];
    }
    x=strlen(word);
    printf("%d",x*num);
    return 0;
}
