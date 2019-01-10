#include<stdio.h>
#include<stdlib.h>

int *arr;

long partition(long first,long last)
{
  long pivot=arr[first],i,j=first;
  int temp;
  for(i=first+1;i<=last;i++)
  {
     if(arr[i]<=pivot)
     {
       temp=arr[++j];
       arr[j]=arr[i];
       arr[i]=temp;
     }
     
  }
  temp=arr[j];
  arr[j]=pivot;
  arr[first]=temp;
  
  return j;
  
}

quickselect(long first,long last,long k)
{
  long p;
  p=partition(first,last);
  if(p==k)
    return p;
  else if(p>k)
    last=p-1;
  else 
    first=p+1;
  quickselect(first,last,k);
}

int main()
{
  long n,i;  
  scanf("%ld",&n);
  arr=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int median=arr[quickselect(0,n-1,n/2)];
  printf("%d",median);
}
