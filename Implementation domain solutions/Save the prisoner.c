#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int saveThePrisoner(int n, int m, int s){
    return ((m-1)+(s-1))%n+1;
}

int main() {
    int t; 
    scanf("%d", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int m; 
        int s; 
        scanf("%d %d %d", &n, &m, &s);
        int result = saveThePrisoner(n, m, s);
        printf("%d\n", result);
    }
    return 0;
}
