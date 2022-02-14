#include<stdio.h>
typedef struct complex
{
  int realpart;
  int imgpart;
}complex;
complex input()
{
  complex i1;
  printf("enter the value of a and b where a+ib is a complex number\n");
  scanf("%d%d",&i1.realpart,&i1.imgpart);
  return i1;
}
complex add(complex c1,complex c2)
{
  complex sum;
  sum.realpart=c1.realpart+c2.realpart;
  sum.imgpart=c1.imgpart+c2.imgpart;
  return sum;
}
void output(complex c1,complex c2,complex sum)
{
  printf("the sum of %d+i%d and %d+i%d is %d+i%d",c1.realpart,c1.imgpart,c2.realpart,c2.imgpart,sum.realpart,sum.imgpart);
}
int main()
{
  complex c1,c2,sum;
  c1=input();
  c2=input();
  sum=add(c1,c2);
  output(c1,c2,sum);
  return 0;
}