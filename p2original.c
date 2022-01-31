#include<stdio.h>
int input()
{
  int a;
  printf("enter the value of a\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int largest;
  if(a>b)
  {
    if(a>c)
    {
      largest=a;
    }
  }
  else if(b>c)
  {
    largest =b;
  }
  else
  {
    largest =c;
  }
  return largest;
}
void output(int a,int b,int c,int largest)
{
  printf("the largest number among %d,%d and %d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,largest,q;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}