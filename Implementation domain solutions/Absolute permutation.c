#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,k,i,loop,count;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        if(k==0){
              for(i=1;i<=n;i++)
                  printf("%d ",i);
            printf("\n");
        }
        else {
            
            if(n%(2*k)!=0)
            printf("-1\n");
           else{
               loop=n/(2*k);
               count=0;
                while(count<loop){
                    for(i=1;i<=k;i++){
                        printf("%d ",count*2*k+k+i);
                    }
                    for(i=1;i<=k;i++){
                        printf("%d ",count*2*k+i);
                    }
                    count++;
                }
               printf("\n");
        }
        }
    }
    return 0;
}
