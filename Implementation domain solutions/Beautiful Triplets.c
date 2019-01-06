#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,d;
    scanf("%d",&n);
    scanf("%d",&d);
    int arr[n];
    int i,j,k,num=0;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i!=j)
            {
                if(abs(arr[i]-arr[j])==d)
                {
                    for(k=j+1;k<n;k++)
                    {
                     if(abs(arr[j]-arr[k])==d)
                         num++;
                    }
                }
            }
        }
    }
    printf("%d",num);
    return 0;
}
