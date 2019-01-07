#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int stringConstruction(char* s) {
    // Complete this function
     char *str;
        int i,j,num=0,x=1;
        for(i=0;i<strlen(s);i++)
        {
           for(j=0;j<i+1;j++)
           {
               if(j!=i)
               {
                   if(s[j]!=s[i])
                      x=1;
                   else
                   {
                       if(s[j]==s[i])
                       {
                           x=0;
                           break;
                       }
                   }
               }
           }
            if(x==1)
                num++;
            
}
    return num;
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = stringConstruction(s);
        printf("%d\n", result);
        }
    return 0;
}
