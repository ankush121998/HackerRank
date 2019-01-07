#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char c;
int a[26]={0},i;
while(scanf("%c",&c)==1)
    {
    if(c>=65&&c<=90)
        {a[c-65]++;}
    else if(c>=97&&c<=122)
        {a[c-97]++;}
}
for(i=0;i<26;i++)
    {
    if(a[i]==0)
        break;
}
if(i==26)
    printf("pangram");
else
    printf("not pangram");
return 0;
}
