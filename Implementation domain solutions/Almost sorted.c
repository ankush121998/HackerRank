#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int comp(const void *a,const void *b)
{
    return(*(int*)a - *(int*)b);
}
int main() {
     int n,j=0;
     scanf("%d",&n);
     int a[n],b[n];
     int i;
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
         b[i] = a[i];
     }
     int count = 0;
     qsort(b,n,4,comp);
    for(i=0;i<n;i++)
     {
         if(b[i]!=a[i])
            count++;
     }
     if(count == 2)
     {
         int c[2];
         for(i=0;i<n;i++)
         {
             if(b[i]!=a[i])
              {
                  c[j++] = i+1;
              }
         }
         printf("yes\nswap %d %d",c[0],c[1]);
     }
     else
     {
         i=0,j=n-1;
         while(i<=j)
         {
             if(a[i] != b[i] && a[j] != b[j])
                  break;
               if(a[i] == b[i] && a[j] == b[j])
                  i++,j--;
               if(a[i] == b[i] && a[j] != b[j])
                  i++;
               if(a[i] != b[i] && a[j] == b[j])
                 j--;
         }
         int r = i,s = j;
         while(r<=s)
         {
             int temp = a[r];
             a[r] = a[s];
             a[s] = temp;
             r++;
             s--;
         }

       int k=0;
       for(k=0;k<n;k++){
        if(a[k] != b[k])
        break;}
       if(k==n)
        printf("yes\nreverse %d %d",i+1,j+1);
       else
        printf("no");
     }
    return 0;
}
