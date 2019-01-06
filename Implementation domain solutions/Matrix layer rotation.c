#include<stdio.h>
int main()
{
    long long a[500][500],R,rr,cc,p=0,l,b[250000],i,k,j,r=4,c=5,m=0;
    scanf("%lld %lld\n",&r,&c);
    rr=r;
    cc=c;
    scanf("%lld",&R);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%lld",&a[i][j]);
    while(p<r&&p<c)
    {
        m=0;
    for(i=p;i<c;i++)
    b[m++]=a[p][i];
    for(i=p+1;i<r;i++)
        b[m++]=a[i][c-1];
    for(i=c-2;i>=p;i--)
        b[m++]=a[r-1][i];
    for(i=r-2;i>=p;i--)
        b[m++]=a[i][p];
  //  for(i=0;i<r+r+c+c-4;i++)
 //       printf("%d ",b[i]);
l=2*(r+c-2*p)-4;
k=R%l;
for(i=p;i<c;i++)
    a[p][i]=b[k++%l];
    for(i=p+1;i<r;i++)
    a[i][c-1]=b[k++%l];
    for(i=c-2;i>=p;i--)
    a[r-1][i]=b[k++%l];
    for(i=r-2;i>=p;i--)
    a[i][p]=b[k++%l];
    p++;
    r--;
    c--;
    }
    for(i=0;i<rr;i++)
    {for(j=0;j<cc;j++)
        printf("%lld ",a[i][j]);
        printf("\n");
    }


    return 0;
}
