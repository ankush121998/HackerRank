#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int y; 
    scanf("%d",&y);
    if(y>=1700 && y<=1917)
        {
        int days=0;
        if(y%4==0)
            {
            days=12;
        }
        else{
            days=13;
        }
        printf("%d.09.%d",days,y);
        
    }
    else if(y>=1919 && y<=2700)
        {
        int days=0;
        if(y%400==0 || (y%4==0 && y%100!=0))
            {
            days=12;
        }
        else{
            days=13;
        }
        printf("%d.09.%d",days,y);
        
        
    }
    else
        {
        int days=26;
        printf("26.09.1918");
        
    }
    // your code goes here
    return 0;
}
