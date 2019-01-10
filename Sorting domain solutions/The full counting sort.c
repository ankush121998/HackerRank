#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct tpl{
	int a;
	char s[101];
};
struct tpl t[1000005],b[1000005];
long c[105];
int main() 
{

	int a[1000000],i,j;
	long int n;
	//char s[10];
	scanf("%ld",&n);
	/*for(i=0;i<n;i++)
	{
		scanf("%d%s",&a[i],s[i]);
		//scanf("%s",s[i]);
		if(i<=n/2)
		{
			s[i][0] = '-';
			s[i][1] = '\0';
		}
	}*/
	for(i=0;i<n;++i)
	{
		scanf("%d%s",&t[i].a,t[i].s);
		c[t[i].a]++;
		if((i+1)<=n/2)
		{
			t[i].s[0] = '-';
			t[i].s[1] = '\0';
		}
	}
	for(i=1;i<100;++i)
		c[i]+=c[i-1];

	for(j=n-1;j>=0;j--)
	{
		b[c[t[j].a]-1]=t[j];
		c[t[j].a]--;
	}

	for(i=0;i<n;i++)
	{
		printf("%s ",b[i].s);
		//printf("%s",s[i]);
		
	}
	/*for(i=0;i<n;i++)
	{
		c[a[i]]++;
	}
	for(i=0;i<100;i++)
	{
		c[i] = c[i]+c[i-1];	
	}*/
	/*for(i=0;i<100;i++)
	{	
		printf("%d ",c[i]);
	}*/
	/*for(i=0;i<100;i++)
	{
		if(c[i]>0)
		{
			for(j=0;j<c[i];j++)
			{
				printf("%d ",i);
			}
		}
	}*/
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
