#include<stdio.h>

void input_string(char *a,char *b)
{
  printf("Enter the first string: ");
  scanf("%s",a);
  printf("Enter the second string: ");
  scanf("%s",b);
}

int str_cmp(char *a,char *b)
{
  int i=0;
  for(i=0;a[i]==b[i] && a[i]!=0;i++);
  return a[i]-b[i];
}

void output(char *a,char *b,int c)
{
  if(c>0)
  {
    printf("%s is greater than %s",a,b);
  }
  else if(c<0)
  {
    printf("%s is greater than %s",b,a);
  }
  else
  {
    printf("%s and %s are equal",a,b);
  }
}

int main()
{
  char s1[100],s2[100];
  int result;
  input_string(s1,s2);
  result=str_cmp(s1,s2);
  output(s1,s2,result);
  return 0;
}