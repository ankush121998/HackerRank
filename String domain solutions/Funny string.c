#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int funnyString(char* s){
    // Complete this function
     int k=0,x=strlen(s);
    char arr[10000];
    int i,j,no;
    char c,b;
  for(i=x-1;i>=0;i--)
  {
      arr[k]=s[i];
      k++;
  }
    k=1;
    for(i=1;i<x;i++)
    {
        if(arr[i]>arr[i-1])
            c=arr[i]-arr[i-1];
        else
            c=arr[i-1]-arr[i];
        if(s[i]>s[i-1])
            b=s[i]-s[i-1];
        else
            b=s[i-1]-s[i];
        if(c==b)
            no=1;
        else
        {
            no=0;
            break;
        }
            
    }
    return no;
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = funnyString(s);
        if(result==1)
            printf("Funny\n");
        else
            printf("Not Funny\n");
    }
    return 0;
}
