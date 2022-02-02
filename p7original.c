#include<stdio.h>
typedef struct complex
{
  float real,imaginary;
}Complex;
Complex input_complex()
{
  Complex c;
  printf("enter complex numbers \n");
  scanf("%f%f",&c.real,&c.imaginary);
  return c;
}
Complex add(Complex c1,Complex c2)
{
  Complex sum;
  sum.real=c1.real+c2.real;
  sum.imaginary=c1.imaginary+c2.imaginary;
  return sum;
}
void output(Complex c1, Complex c2, Complex c)
{
  printf("%f + %fi + %f + %fi = %f + %fi",c1.real,c1.imaginary,c2.real,c2.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex c1,c2,c;
  c1=input_complex();
  c2=input_complex();
  c=add( c1,c2);
  output( c1, c2,  c);
  return 0;
}

