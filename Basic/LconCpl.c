// 条件编译
#include <stdio.h>
#define MAX 11
int main()
{
  #if MAX==0 
    printf("zero\n"); //必须换行
  #elif MAX>0 
    printf("positive\n");
  #else 
    printf("negetive\n");
  #endif 
    return 0;
  /*
  #if defined(MAX) or ifdef MAX
    code
  #endif 判断是否有过宏定义。可以防止出现重复定义，在包含多个源文件时。
  */
}