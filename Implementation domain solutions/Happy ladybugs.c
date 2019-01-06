#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int Q; 
    scanf("%d",&Q);
   for(int a0 = 0; a0 < Q; a0++){
        int n; 
        scanf("%d",&n);
        char* b = (char *)malloc(512000 * sizeof(char));
        scanf("%s",b);
        int num=1,arr[26]={0},i,k;
        for(char i='A'; i<='Z'; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(b[j]==i) 
                    count++;
            }
            if(count==1)
            {
                num=0;
                break;
            }     
        }
        if(num){
            int count=0;
            for(int i=0; i<n; i++){
                if(b[i]=='_') count++;
            }
            if(count==0){
                for(int i=1; i<(n-1); i++){
                    if(b[i]!=b[i+1] && b[i]!=b[i-1])
                    {
                        num=0;
                        break;
                    }
                }
            } 
        }
        if(num) 
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}
