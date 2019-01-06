#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int formingMagicSquare(int s[3][3]) {
int array[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},  
};
int num= 81;
for (int k = 0; k < 8; k++) {
    int cost = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cost += abs( s[i][j] -array[k][i][j] );
    }
    if (cost < num)
        num =cost;
}
   return num;
}

int main() {
    int s[3][3];
    for (int s_i = 0; s_i < 3; s_i++) {
       for (int s_j = 0; s_j < 3; s_j++) {
      
          scanf("%i",&s[s_i][s_j]);
       }
    }
    int result = formingMagicSquare(s);
    printf("%d\n", result);
    return 0;
}
