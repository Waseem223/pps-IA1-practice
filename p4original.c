#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter n value\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
   printf("enter array elements\n");
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
 
  int i=0,sum=0;
  for(i;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  int i=0;
  for(i;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d",a[n-1],sum);
}
int main()
{
  int n,sum;
n=input_array_size();
int a[n];
input_array(n,a);
sum=sum_n_arrays(n,a);
out_put(n,a,sum);
}