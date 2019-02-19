#include<stdio.h>
int main()
{
  int n,a=5,b=1;
  scanf("%d",&n);
  while(a>0)
  {
    printf("%d ",b*n);
    a--;
    b++;
  }
}
