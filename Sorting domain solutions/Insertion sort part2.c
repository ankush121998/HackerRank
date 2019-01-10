#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Head ends here */
void insertionSort(int ar_size, int *  ar) 
{
int n=ar_size,i=0,j=0,key=0;
    for(i=1;i<n;i++)
    {
        j=i-1;
        key=ar[i];
        while(j>=0 && ar[j]>key)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=key;
        for(j=0;j<n;j++)
        {
            printf("%d ",ar[j]);
        }
        printf("\n");
    }
        

}

/* Tail starts here */
int main() {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
