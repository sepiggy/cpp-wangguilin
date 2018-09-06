#include <stdlib.h>
#include <string.h>

struct Stu {
  char *name;
  int age;
};

int main() {
  Stu *ps = new Stu;
  ps->name = new char[1023];
  strcpy(ps->name, "xiaoliang");
  ps->age = 19;

  delete[]ps->name;
  delete ps;

  return 0;
}
