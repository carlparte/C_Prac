// 结构体
#include <stdio.h>
struct Student
{
  char *name;
  int age;
  float height;
}; // stu[2]={{"ad", 13},{"mc", 12}} 初始化，结构体数组
struct Student stu = {"Adam", 13};

struct Student *p;
p=&stu; // 指向结构体变量的指针

void test (struct Student stud)
{
  printf("before %d\n",stud.age);
  stud.age=10;
  printf("after %d\n",stud.age);
}

int main()
{
  stu.age = 14;
  printf("age is %d\n", stu.age);
  printf("name is %s\n", stu.name);

  struct Student st={"dad",20};
  test(st);
  printf("after %d\n",st.age); //形参与实参
  return 0;
}