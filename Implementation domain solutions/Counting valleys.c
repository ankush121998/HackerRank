#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  long long int n,num=0,i,j,x=0,y=0;
    scanf("%lld",&n);
    char *str=(char *)malloc(sizeof(char )*n);
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
      if(str[i]=='U') 
          ++x;
            if(str[i]=='D')
                --x;
            if(x==0 &&str[i]=='U')
                ++num;
    }
    printf("%d",num);
    return 0;
}
