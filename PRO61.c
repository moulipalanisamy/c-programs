#include<stdio.h>
#include<string.h>
int main()
{
  int c,d,i;
  char a[10],b[10];
  scanf("%s%s",a,b);
  c=strlen(a);
  for(i=0;i<c;i++)
  {
    d=a[i]+b[i];
    if (a[i]>=65&&a[i]<=90)
    printf("%c",d);
    else
    printf("%c",d-26);
  }
}
