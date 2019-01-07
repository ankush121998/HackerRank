#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[100005];
   scanf("%s",s);
    int min=100000000,max=0,l,i,c1=0,c2=0,c3=0;
    int arr[125]={0};
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        arr[(int)s[i]]++;
    }
    for(i=97;i<=123;i++)
    {
    	if(arr[i]!=0)
    	{
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    	}    
    }
    if(min==max)
        printf("YES\n");
    else 
    {
       for(i=97;i<=123;i++)
       {
       	if(arr[i]!=0)
       	{
          if(arr[i]==min)
              c1++;
           else if(arr[i]==max)
              c2++; 
           else
               c3++;
       	}       
       }
        if(c3!=0)
            printf("NO\n");
        else if(c1==1&&min==1)
            printf("YES\n");
        else if(c2==1&&max-min==1)
            printf("YES\n");
        else
            printf("NO\n");
           
    }
   
    return 0;
}
