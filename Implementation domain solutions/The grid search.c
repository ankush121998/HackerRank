#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int R,C,r,c;

int check(char G[R][C],char P[r][c],int i,int j)
    {
    int m=0,n=0,count=0;
    for(m=0;m<r;m++)
        {
        for(n=0;n<c;n++)
            {
            if(G[i+m][j+n]==P[m][n])
                count++;
            else
                return 0;
        }
    }
    if(count==r*c)
        return 1;
    else
        return 0;
}



int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T,i,j,m,n,f;
    scanf("%d",&T);
    while(T--)
        {
        scanf("%d %d",&R,&C);
        char G[R][C];
        for(i=0;i<R;i++)
            {
            	scanf("%s",G[i]);
        	}
        scanf("%d %d",&r,&c);
        char P[r][c];
        for(i=0;i<r;i++)
            {
            scanf("%s",P[i]);
            
        }
/*
        for(i=0;i<R;i++)
            {
            	for(j=0;j<C;j++)
            	{
            	printf("%c",G[i][j]);
        		}
        		printf("\n");
        	}
        for(i=0;i<r;i++)
            {
            	for(j=0;j<c;j++)
            	{
            	printf("%c",P[i][j]);
        		}
        		printf("\n");
        	}
            */
        f=0;
        for(i=0;i<R-r+1;i++)
            {
            for(j=0;j<C-c+1;j++)
                {
                	
                    if(G[i][j]==P[0][0])
                        {
                        	//printf("%d %d\n",i,j);
                    		if(check(G,P,i,j)==1)
                    		{
                        		f=1;
                        		break;
                			}
                    	}
                
            	}
            	
        	}
        if(f)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
