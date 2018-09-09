// 输入操作
#include <stdio.h>
int main()
{
  printf("Input your age: ");
  int age;
  scanf("%d",&age);
  printf("Your age is %d.\n",age);

  int y,m,d;
  printf("input you birthday(seprated with space): ");
  scanf("%d %d %d",&y,&m,&d); //If you want to sep with other symbol, you must write between "".e.g %d-%d-%d.
  printf("The birth day is %d-%d-%d\n",y,m,d);
  return 0;
}