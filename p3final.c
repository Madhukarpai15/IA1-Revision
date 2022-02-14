#include<stdio.h>

int input_n()
{
  int a;
  printf("Enter the number of terms: ");
  scanf("%d",&a);
  return a;
}

int sum_n(int n)
{
  int i=1,sum=0;
  for(i=1;i<=n;i++)
  {
    sum+=i;
  }
  return sum;
}

void output(int n,int sum)
{
  int i=1;
  for(i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is: %d",n,sum);
}

int main()
{
  int n,result;
  n=input_n();
  result=sum_n(n);
  output(n,result);
  return 0;
}