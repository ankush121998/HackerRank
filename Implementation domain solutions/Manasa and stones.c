#include<stdio.h>
int main()
{
	int t,i,j,a,b,n,k,p=0,e;
	scanf("%d",&t);
	for(e=0;e<t;e++)
	{
		scanf("%d",&n);
		p=0;
		int w[n];
		scanf("%d",&a);
		scanf("%d",&b);
		if(a<b)
		{
			for(j=n-1;j>=0;j--)
			{
				k = j*a + (n-1-j)*b;
				w[p]=k;
				p++;
//				printf("%d ",k);
			}
		}
		else
		{
			for(j=n-1;j>=0;j--)
			{
				k = j*b + (n-1-j)*a;
				w[p]=k;
				p++;
//				printf("%d ",k);
			}
		}
		for(i=0;i<n;i++)
		{
			if(i>0 && w[i]!=w[i-1])
				printf("%d ",w[i]);
			if(i==0)
				printf("%d ",w[i]);
		}
		printf("\n");
	}
}
