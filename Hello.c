#include <stdio.h>
int addTwo(int a, int b) //function: add two number together
{
  return a + b;
}
char pri(int n) //test char and ASCII
{
  return 'A' + n;
}
int camp(int a, int b)
{
  return a > b;
}
int main()
{
  printf("hello, world!\n");
  printf("%d\n", addTwo(2, 3));
  printf("%c\n", pri(1));
  printf("%d\n", camp(1, 3));

  for (int i = 0; i < 10; i++)
  {
    printf("%d", i);
  }
  printf("\n");
  return 0;
}