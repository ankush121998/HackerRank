#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int compare (const void *a, const void * b)
{  return ( *(char *)a - *(char *)b ); }



void swap (char* a, char* b)
{
    char t = *a;
    *a = *b;
    *b = t;
}
int findCeil (char str[], char first, int l, int h)
{
 
    int ceilIndex = l,i;
    for (i = l+1; i <= h; i++)
      if (str[i] > first && str[i] < str[ceilIndex])
            ceilIndex = i;
 
    return ceilIndex;
}

int main()
{
	long long int T,i,j;
	char s[110];
	scanf("%lld",&T);
	for(i=0;i<T;i++)
	{
		scanf("%s",s);

	
	int size = strlen(s);
	int isFinished=0;
	int j;
    for ( j = size - 2; j >= 0; --j )
    	if (s[j] < s[j+1])
        	break;
    if ( j == -1 )
    {
            isFinished = 1;
            printf("no answer\n");
    }

    else
        {
            int ceilIndex = findCeil( s, s[j], j + 1, size - 1 );
 
         
            swap( &s[j], &s[ceilIndex] );
 
         
            qsort( s + j + 1, size - j - 1, sizeof(s[0]), compare );
            printf("%s\n",s);
        }

    }
        return 0;

}
