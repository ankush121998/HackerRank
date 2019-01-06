#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int surfaceArea(int row, int col, int *arr) {
    int top =2*row*col;
    int i,j,right=0,front=0;    
    for(i=0;i<row-1;i++)
    {
for(j=0;j<col;j++)
{
    if(*((arr+i*col)+j)>*((arr+(i+1)*col)+j))
    {
        right=right+((*((arr+i*col)+j))-(*((arr+(i+1)*col)+j)));
    }
    }
            }
    j=row-1;
    for(i=0;i<col;i++)
        {
           right=right+*((arr+j*col)+i);
        }
    right=2*right;
    j=0;
    for(i=0;i<row;i++)
    {
        front=front+((*(arr+i*col)+j));
    }
    for(i=0;i<row;i++)
    {
        for(j=1;j<col;j++)
        {
            if(*((arr+i*col)+j)>(*((arr+i*col)+j-1)))
                front=front+(*((arr+i*col)+j)-*((arr+i*col)+j-1));
        }
    }
    front=2*front;
    return (front+right+top);
}

int main() {
    int H; 
    int W; 
    scanf("%i %i", &H, &W);
    int A[H][W];
    for (int A_i = 0; A_i < H; A_i++) {
       for (int A_j = 0; A_j < W; A_j++) {
      
          scanf("%i",&A[A_i][A_j]);
       }
    }
    int result = surfaceArea(H, W, (int *)A);
    printf("%d\n", result);
    return 0;
}
