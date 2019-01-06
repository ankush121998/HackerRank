#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maxDuplicatesBruteForce(int arr[], int size)
{
    int counter = 0;
    int max = 0;
     
    int index_max = 0; //to store the index of maximum duplicated element
     
    int i,j;
    for(i=0;i<size;i++)
    {
        counter = 0;
        for(j=0;j<size;j++)
        {
            //check for duplicates in the array
            if(arr[i] == arr[j])
                counter++;
        }
        //update the counter and max_index
        if(counter > max)
        {
            max = counter;
            index_max = i;
        }
    }
     
    //return the maximum duplicated element
    return arr[index_max];
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,num=0,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int k=maxDuplicatesBruteForce(arr,n);
    for(i=0;i<n;i++)
    {
        if(arr[i]!=k)
            num++;
    }
    printf("%d",num);
    return 0;
}
