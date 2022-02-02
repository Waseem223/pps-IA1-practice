#include<stdio.h>
int main()
{
  char a[100],b[100];
  int i,result;
  printf("enter two strings \n");
  scanf("%s%s",a,b);
  for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
  {
    if(a[i]>b[i])
    {
      result=1;
      
    }
     else if(a[i]<b[i])
    {
      result=-1;
      
    }
    else
    {
      result=0;
      
    }
  }

if(result==1)
{
  printf("%s is greater than %s",a,b);
}
if(result==-1)
{
  printf("%s is less than %s",a,b);
}
if(result==0)
{
  printf("%s is equals to %s",a,b);
}
}