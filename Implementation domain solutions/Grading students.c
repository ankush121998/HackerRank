#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades, int *result_size){
    // Complete this function
    int i,j;
    for(i=0;i<grades_size;i++)
    {
        int k=grades[i];
        while(k%5!=0)
        {
            k++;
        }
        if(k-grades[i]<3&&grades[i]>=38)
        {
            grades[i]=k;
        }
     }
    return grades;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size;
    int* result = solve(n, grades, &result_size);
    for(int result_i = 0; result_i < n; result_i++) {
        printf("%d\n", result[result_i]);
    }
    return 0;
}
