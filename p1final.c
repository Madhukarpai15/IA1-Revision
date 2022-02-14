#include<stdio.h>

int input(int *a,int *b)
{
  int x,y;
  printf("Enter the numbers: ");
  scanf("%d %d",&x,&y);
  *a=x;
  *b=y;
}

void add(int a,int b,int *c)
{
  *c=a+b;

}

void output(int a,int b, int c)
{
  printf("Result of %d + %d is: %d",a,b,c);
}

int main()
{
  int num1,num2,sum;
  input(&num1,&num2);
  add(num1,num2,&sum);
  output(num1,num2,sum);
  return 0;
}