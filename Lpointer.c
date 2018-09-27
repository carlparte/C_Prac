//指针
#include <stdio.h>
void swap(char *v1, char *v2);
int sumAndMinus(int v1,int v2,int *minus);
int main()
{
  // int a = 10;
  // int *p;
  // p = &a;
  // *p = 9;
  // printf("%d\n", a); //Just a test

  char a1=10,a2=5;
  swap(&a1,&a2);
  printf("a1=%d,a2=%d\n",a1,a2); // swap the values of two variables

  int a=6, b=2;
  int sum, min;
  sum=sumAndMinus(a,b,&min);
  printf("sum=%d\n",sum);
  printf("minus=%d\n",min); //利用指针使函数输出多个值

  int an[4]={1,3,5,7};
  int *p=an;
  for (int i=0;i<4;i++) {
    int value=*(p+i); //p+1代表p值增加多少，要看指针的类型，int+2, float+4, double+8
    printf("an[%d]=%d\n",i,value);
    }

  char *ps;
  char s[]="asd";
  // ps=s; //p=&s[0];
  for (ps=s;*ps!='\0';ps++){
    printf("%c\n",*ps);
  } //指针遍历字符串

  return 0;
}
void swap(char *v1, char *v2)
{
  char temp;
  temp=*v1;
  *v1=*v2;
  *v2=temp; //体会指针的作用，直接修改内存地址的指向内容
}
int sumAndMinus(int v1,int v2,int *minus)
{
  *minus=v1-v2;
  return v1+v2; //用指针实现函数的多个返回结果。不通过函数，而是直接修改内存。
}