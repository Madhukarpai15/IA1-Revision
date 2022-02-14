#include<stdio.h>

float input()
{
  float a;
  printf("Enter the number: ");
  scanf("%f",&a);
  return a;
}

float my_sqrt(float n)
{
  float start=0,end=n,mid;
  while((end-start)>=0.00001)
  {
    mid=(start+end)/2;
    if(mid*mid<n)
    {
      start=mid;
    }
    else if(mid*mid>n)
    {
      end=mid;
    }
  }
  return mid;
}

void output(float n,float sqrt_result)
{
  printf("Square root of %f is %f",n,sqrt_result);
}

int main()
{
  float n,result;
  n=input();
  result=my_sqrt(n);
  output(n,result);
  return 0;
}