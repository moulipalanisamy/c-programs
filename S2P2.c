#include<stdio.h>
int main()
{
  int a,b,c=0;
  scanf("%d",&a);
  b=a;
  while(b!=0)
  {
    c=c*10;
    c=c+ (b%10);
    b=b/10;
  }
  if(a==c)
  printf("yes");
  else 
  printf("no");

}
