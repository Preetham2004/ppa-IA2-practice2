#include<stdio.h>
int input_number()
{
  int a;
  printf("enter any number:");
  scanf("%d",&a);
  return a;
}
int is_composite(int a)
{
  int i;
  for(i=2;i<=a/2;i++)
  {
    if(a%i==0)
    return 0;
    else
    return 1;
  }
  return a;
}
void output(int a,int composite)
{
  if(composite==0)
  printf("composite");
  else
  printf("not composite"); 
}
int main()
{
  int a,x;
  a=input_number();
  x=is_composite(a);
  output(a,x);
  return 0;
}
  