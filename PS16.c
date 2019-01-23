#include<stdio.h>
#include<string.h>
void main()
{
  int r,n,e=0,i,k;
  char a[5],b[5];
  scanf("%s%s",a,b);
  r=strlen(a);
  n=b[0]-a[0];
  for(i=0;i<r;i++)
   {
    if(b[i]-a[i]==n)
    e+=1;
    else
    break;
   }
k=e;
if(k=3)
 {
  printf("yes");
 }
else
 {
  printf("no");
 }
}
