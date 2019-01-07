#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checkme(char * s1, char * s2, int len)
{
    int count1[26] = {0};
    int count2[26] = {0};
    for( int i = 0; i < len; i++ )
    {
        count1[*(s1+i)-'a']++;
        count2[*(s2+i)-'a']++;
    }

    for(int j=0;j<26;j++)
    {
        if (count1[j] != count2[j]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s[101];
    int i,j,c,len, sublen, check, t;

    scanf ("%d", &t);
    while(t>0) {
       check =0;
       scanf ("%s", s);
       len = strlen(s);   
       for( sublen = 1 ; sublen < len; sublen++ ) {
          for( i = 0 ; i < len - sublen ; i++ ) {
             for( j = i +1 ; j <= len - sublen ; j++ ) 
                  if(checkme(s+i, s+j, sublen) == 1)
                         check ++;
          }
       }
        printf ("%d\n", check);
        t --;
    }
    
    return 0;
}
