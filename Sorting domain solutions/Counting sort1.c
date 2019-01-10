#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void countingSort1(int *ar,int ar_size)
{
    int index=0,max=0;
    int countSort[100]={0};
    for(index=0;index<ar_size;index++)
    {
        countSort[ar[index]]+=1;
        max=ar[index] > max ? ar[index] : max;
    }
    for(index=0;index<=max;index++)
        printf("%d ",countSort[index]);
    printf("\n");
}

int main() {
    int _ar_size=0,i=0;
    scanf("%d",&_ar_size);

    int _ar[_ar_size];

    for(i=0;i<_ar_size;i++)
    {
        scanf("%d",&_ar[i]);
    }

    countingSort1(_ar,_ar_size);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
