#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int k; 
    scanf("%d",&k);
    int i,j,num;
    num=k%26;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!='-')
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                if(s[i]+num>'Z')
                    s[i]=s[i]+num-26;
                else
            s[i]=s[i]+num;
            }
            if(s[i]>=97&&s[i]<=122)
        {
            if(s[i]+num>122)
                s[i]=s[i]+num-26;
            else
                s[i]=s[i]+num;
        }
    }
    }
   for(i=0;i<n;i++)
       printf("%c",s[i]);
    return 0;
}
    
