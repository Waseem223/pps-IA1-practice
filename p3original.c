#include<stdio.h>
int input()
{
  int n;
  printf("enter n value\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i=0,sum=0;
  for(i;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d",i,sum);
}
int main()
{
  int n,sum;
  n=input();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}