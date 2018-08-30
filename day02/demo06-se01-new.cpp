#include <iostream>

using namespace std;

struct Stu {
  char name[30];
  char sex;
  float score;
};

int
main() {

  // 一级指针
  int *p = new int; // int *p = (int *) malloc(sizeof(int));
  *p = 1234;
  cout << *p << endl;

  // 二级指针
  int **pp = new int *; // int **pp = (int**)malloc(sizeof(int*));

  // 结构体指针
  Stu *ps = new Stu; // struct Stu *ps = (struct Stu**)malloc(sizeof(struct Stu));

  // 数组指针
  float *fp = new float[10]{1.2, 3.4}; // float *p = (float*)malloc(sizeof(float) * 10));
  for (int i = 0; i < 10; i++) {
    cout << fp[i] << endl;
  }

  // 指针数组
  char **pString = new char *[10];
  for (int i = 0; i < 10; i++) {
    pString[i] = "china";
  }
  for (int i = 0; i < 10; i++) {
    cout << pString[i] << endl;
  }

  // 二维数组
  int (*p2)[5] = new int[3][5];

  // 三维数组
  int (*p3)[3][5] = new int[2][3][5];

  return 0;
}