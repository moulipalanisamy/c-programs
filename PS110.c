#include<stdio.h>
int main()
{
  int a,b=0;
  scanf("%d",&a);
  while(a)
  {
    b=b+1;
    a/=10;
  }
  printf("%d",b);
}
