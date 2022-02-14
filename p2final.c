#include<stdio.h>

int input()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  return a;
}

int cmp(int a,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c)
  {
    return b;
  }
  else if(c>a && c>b)
  {
    return c;
  }
}

void output(int a,int b, int c,int largest)
{
  printf("The largest number out of %d, %d and %d is: %d",a,b,c,largest);
}

int main()
{
  int x,y,z,result;
  x=input();
  y=input();
  z=input();
  result=cmp(x,y,z);
  output(x,y,z,result);
  return 0;
}