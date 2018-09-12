// typedef 为各种数据类型定义新名字
#include <stdio.h>
typedef int Integer;
typedef unsigned int UInteger;
typedef float Float;

typedef char *String; //为指针定义别名

typedef struct 
{
  float x;
  float y;
} Point;

typedef Point *pp; //定义结构体及别名

int sum(int a, int b)
{
  printf("sum=%d\n",a+b);
}
typedef int (*Mysum)(int, int); //指向函数的指针
int main()
{
  Integer i=-10;
  UInteger ui=11;
  Float f=12.34f;
  printf("%d %d %.2f\n",i,ui,f);

  String str="This is a string";
  printf("%s\n",str);

  Point point={10,20};
  pp p=&point;
  printf("x=%.2f, y=%.2f\n",p->x,p->y);

  Mysum po =sum;
  (*po)(4,5);
  return 0;
}