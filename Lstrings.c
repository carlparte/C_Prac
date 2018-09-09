#include <stdio.h>
int main()
{
  char a[3]={'m','J','\0'};
  printf("%s\n",a);
  puts("I have a dream!");
  char b[10];
  scanf("%s",b); // you can also use gets()
  puts(b);
  /*
  putchar() 输出单个字符；
  getchar() 读入单个字符；
  strlen() 测量字符串个数；
  strcpy(s,"str") 拷贝字符串；
  strcat(s,"str") 拼接字符串到尾部；
  strcmp(s1,s2) 比较字符串，相同为0，不同则返回第一个不相同字符的ASCII值之差；
  */
  return 0;
}