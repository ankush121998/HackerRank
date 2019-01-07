#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    int *c = (int *)calloc(sizeof(int), 200);
    int *value = (int *)calloc(sizeof(int), 10000001);
    scanf("%s",s);
    int n, cnt = 0; 
    for(int i = 0; s[i] != '\0'; i++){
        value[s[i] - 'a' + 1] = 1;
        cnt = s[i] - 'a' + 1;
        while(s[i + 1] != '\0' && s[i] == s[i + 1]){
            cnt += s[i] - 'a' + 1;
            value[cnt] = 1;
            i++;
        }
    }
    scanf("%d",&n);
    for(int a0 = 0; a0 < n; a0++){
        int x, i; 
        scanf("%d",&x);
        if (value[x]){
            printf("Yes\n");
        }
        else printf("No\n");
        // your code goes here
    }
    return 0;
}
