#include<stdio.h>
int main()
{
  int n,k,c=0,i,j;
  int a[10];
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=0;j<k;j++)
  {
    c=c+a[j];
  }
  printf("%d",c);
}
