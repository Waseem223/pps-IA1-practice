#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter n value\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float result;
  result=sqrt(n);
  return result;
}
void output(float n,float result)
{
  printf("the square root of %f is %f\n",n,result);
}
int main()
{
  float n,result;
  n=input();
  result=my_sqrt(n);
  output(n,result);
  return 0;
}