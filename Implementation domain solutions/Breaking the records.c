#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *score = malloc(sizeof(int) * n),min,max,c1=0,c2=0;
    for(int score_i = 0; score_i < n; score_i++){
       scanf("%d",&score[score_i]);
        if(score_i==0) {
            min=score[score_i];
            max=score[score_i];
        }
        else {
            if(score[score_i]<min) {
                c1++;
                min=score[score_i];
            }
            if(score[score_i]>max) {
                c2++;
                max=score[score_i];
            }
        }
    }
    printf("%d %d",c2,c1);
    // your code goes here
    return 0;
}
