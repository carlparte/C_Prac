// 枚举类型
// 声明一组常数，当一个变量仅可能有几个固定的值
#include <stdio.h>
enum COLOR
{
  red = 1,
  green,
  blue
};
void fun(enum COLOR color)
{
  printf("%d\n", color);
}
int main()
{
  enum COLOR color = red;
  enum COLOR color2 = 0;
  fun(color);
  fun(color2);
  return 0;
}