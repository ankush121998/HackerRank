#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 void my_qsort(int x[], int first, int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         my_qsort(x,first,j-1);
         my_qsort(x,j+1,last);

    }
}

int main() {
  
    int i, total, *arr = NULL;
    int min, diff;

    scanf("%d\n", &total);

    arr = (int*) malloc(sizeof(int) * total);
    if (arr == NULL)
    {
        printf("malloc failed\n");
        exit(1);
    }

    for (i=0; i < total; i++)
      scanf("%d", &arr[i]);

  	my_qsort(arr, 0, total-1);
  
  	min = abs(arr[0]-arr[1]);
  
  	for (i = 0; i < total-1; i++)
    {
      	diff = abs(arr[i]-arr[i+1]);
		if (min > diff)
          min = diff;
    }
  
  
    for (i = 0; i < total-1; i++)
    {
      if (min == abs(arr[i]-arr[i+1]))
        printf("%d %d ", arr[i], arr[i+1]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
