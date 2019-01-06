#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        int n; 
        scanf("%d",&n);
        int M[n][n];
        for(int M_i = 0; M_i < n; M_i++){
           for(int M_j = 0; M_j < n; M_j++){
              
              scanf("%d",&M[M_i][M_j]);
           }
        }
        int num_el[n];
        int booked[n];
        int num_bl[n];
        for (int i = 0; i < n; i++)
        {
            num_el[i] = 0;
            booked[i] = 0;
            num_bl[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                num_el[i] += M[i][j];
                num_bl[i] += M[j][i];
            }
        }
        int found = 0;
        int imp = 0;
        for (int i = 0; i < n; i++)
        {
            found = 0;
            for (int j = 0; j < n; j++)
            {
                if (booked[j] == 0 && num_el[j] == num_bl[i])
                {
                    found = 1;
                    booked[j] = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("Impossible\n");
                imp = 1;
                break;
            }
        }
        if (imp == 0)
            printf("Possible\n");
    }
    return 0;
}
