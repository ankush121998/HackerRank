#include <stdio.h>

void print(int n, int *  ar)
{
    for(int i = 0 ; i <n; ++i)
    {
        if( i )
            printf(" ");
        printf("%d" , ar[i]);
    }
    puts("");
}

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Head ends here */
void insertionSort(int n, int *  ar) {

    for(int i = n; i--;)
    {
        int now = ar[i];
        int j = i-1;
        while(j >= 0 )
        {
            if( now < ar[j] )
            {
                ar[j+1] = ar[j];
                print(n,ar);
                --j;
            }
            else
                break;
        }
        if(j != i-1)
        {
            ar[j+1] = now;
            print(n,ar);
        }
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
