#include <stdio.h>
char *upper(char *str) //返回指针的函数
{
  char *dest = str;
  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      *str -= 'a' - 'A'; //大小写字母转换
    }
    str++;
  }
  return dest;
}
int sum(int a, int b)
{
  return a + b;
}
int minus(int a, int b)
{
  return a - b;
}
void count(int (*p)(int, int), int a, int b)
{
  int res = p(a, b);
  printf("result is %d.\n", res); //将函数作为参数传递
}
int main()
{
  char str[] = "asdf";
  char *dest = upper(str);
  printf("%s\n", dest);

  int (*p)(int a, int b) = sum; //指向函数的指针. or int (*p)=sum;
  int result = (*p)(1, 3);      //or result=p(1,3)
  printf("%d\n", result);

  count(sum, 4, 3);
  count(minus, 4, 3);
  return 0;
}