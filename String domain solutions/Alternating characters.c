#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int alternatingCharacters(char* s){
    // Complete this function
    int i,num=0;
    int l=strlen(s);
    for(i=0;i<l-1;i++)
    {
        if(s[i]==s[i+1])
        {
            num++;
            
        }
    }
    return num;
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = alternatingCharacters(s);
        printf("%d\n", result);
    }
    return 0;
}
