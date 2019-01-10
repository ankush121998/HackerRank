#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 10000
int arr[MAX]={0};
void countSort(int a[],int d)
{
    int i;
    for(i=0;i<d;i++)
       arr[a[i]]++;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d,i,j,z,noti=0,u;
    float m;
    scanf("%d%d",&n,&d);
    int a[n],b[d];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-d;i++)
    {
        if(i==0)
            countSort(a,d);
        else
        {
           arr[a[i-1]]--;
           arr[a[i+d-1]]++;
        }
        int c=0,sum,f=0;
       if(d%2!=0)
       {
           for(z=0;z<MAX;z++)
           {
              if(arr[z]!=0)
              {
                  c=c+arr[z];
                  if((c>=(d/2)+1)&&(a[i+d]>=2*z))
                  {
                     noti++;break;
                  }
              }
           }
       }
       else
       {
          for(z=0;z<MAX;z++)
           {
              if(arr[z]!=0)
              {
                  c=c+arr[z];
                  if(c==(d/2))
                  {
                      sum=z;f=1;
                  }
                  else if(c>=(d/2)+1&&f==1)
                  {
                     m=(float)(sum+z)/2;
                     if(a[i+d]>=2*m)
                         noti++;break;
                  }
                  else if(c>(d/2)&&(a[i+d]>=2*z))
                  {
                    noti++;break;
                  }
                
              }
           } 
       }
        
    }
    printf("%d",noti);
    return 0;
}
   
