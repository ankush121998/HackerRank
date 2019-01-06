#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int howManyGames(int p, int d, int m, int s) 
{
    int ans=0;
    while(s>=0)
    {
        ans++;
        s=s-p;
        if(p-d>=m)
        {
            p=p-d;
        }
        else
        {
            p=m;
        }
    }
    return ans-1;
}

int main() {
    int p; 
    int d; 
    int m; 
    int s; 
    scanf("%i %i %i %i", &p, &d, &m, &s);
    int answer = howManyGames(p, d, m, s);
    printf("%d\n", answer);
    return 0;
}
