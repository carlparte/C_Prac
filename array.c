#include <stdio.h>
void change1(int b)
{
  b=2;
}
void change2(int b[])
{
  b[0]=2;
}

int main()
{
  int a[3]={5,10,-1};
  printf("addr %p %p %p %p\n",&a[0],&a[1],&a[2],&a);
  change1(a[0]);
  printf("a[0]=%d\n",a[0]);
  change2(a);
  printf("a[0]=%d\n",a[0]);
  return 0;
}