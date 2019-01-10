#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
   for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
           c=a[i+1];
           a[i+1]=a[i];
           a[i]=c;
        }
    }
    c=a[n-1];
  
 
  int ax[c+1];
  int count[c+1];
    for(int i=0;i<=c;i++)
    {
    ax[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        ax[a[i]]++;
    }
    
    
    for(int i=1;i<=c;i++)
    {
        ax[i]=ax[i]+ax[i-1];
    }
    int s[n];
    for(int i=0;i<n;i++)
    {
        s[ax[a[i]]-1]=a[i];
      
        ax[a[i]]=ax[a[i]]-1;
    }
    for(int i=0;i<n;i++)
    {
    printf("%d ",s[i]);
    }
     
    
}
