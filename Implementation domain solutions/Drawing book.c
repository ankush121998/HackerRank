#include<stdio.h>
int main()
{
int n,p,min;
scanf("%d",&n);
scanf("%d",&p);
min=(n/2)-(p/2);
if(min>p/2)
min=p/2;
printf("%d",min);
return 0;
}
