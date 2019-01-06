#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void rotate(int arr[], int a){
        int temp = arr[a];
        arr[a] = arr[a+1];
        arr[a+1] = arr[a+2];
        arr[a+2] = temp;
    }
void bubblesort(int array[], int n){
        for (int i=0; i<n-2; i++){
            for (int j=n-2-1; j>=i; j--){
                while (array[j]>array[j+1]||array[j]>array[j+2]) {
                    rotate(array,j);
                }
            }
        }
    }  
int main() {
    int t,n;
    scanf("%d",&t);
    int i,j;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
      int *arr=(int *)malloc(sizeof(int )*n);
        for(j=0;j<n;j++)
            scanf("%d",&arr[j]);
        bubblesort(arr,n);
        if(arr[n-2]<arr[n-1])
        printf("YES\n");
    else
        printf("NO\n");
    }
    
    return 0;
}
    
