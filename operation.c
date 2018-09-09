#include <stdio.h>
int main()
{
  int a=10, b=15, c;
  c=a++;
  printf("c=a++=%d,a=%d\n",c,a);
  c=++a;
  printf("c=++a=%d,a=%d\n",c,a); //the order is important, but do I really need to remember it? Maybe practice makes perfect.
  return 0;
}