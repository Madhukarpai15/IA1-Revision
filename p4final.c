#include<stdio.h>

int input_n()
{
  int a;
  printf("Enter the number of terms: ");
  scanf("%d",&a);
  return a;
}

void input_array(int n,int a[n])
{
  int i=1,b;
  for(i=1;i<=n;i++)
  {
    printf("Enter the number: ");
    scanf("%d",&b);
    a[i]=b;
  }
}

int sum_n_arrays(int n, int a[n])
{
  int i=1,sum=0;
  for(i=1;i<=n;i++)
  {
    sum+=a[i];
  }
  return sum;
}

void out_put(int n, int a[n],int sum)
{
  int i=1;
  for(i=1;i<=n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d",a[n],sum);
}

int main()
{
  int n,result;
  n=input_n();
  int a[n];
  input_array(n,a);
  result=sum_n_arrays(n,a);
  out_put(n,a,result);
  return 0;
}