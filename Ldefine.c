// 宏定义
#include <stdio.h>
#define PI 3.1416
#define ave(a,b) (a+b)/2

float girth(float rad)
{
  return 2 * PI * rad;
}
int main()
{
  float g = girth(2);
  printf("circle is %f.\n", g);
  #undef PI

  int a=ave(2,6);
  printf("average is %d.\n",a);
  #undef ave //终止宏定义
  
  return 0;
}