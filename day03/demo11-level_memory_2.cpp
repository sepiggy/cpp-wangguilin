#if 0
1. 内存管理, 层次分明
2. 只对本层的内存负责
#endif

#include <iostream>

using namespace std;

class Birthday {

 public:
  Birthday() {
    cout << "Birthday()..." << endl;
    year = new int(1999);
    month = new int(9);
    day = new int(9);
  }

  ~Birthday() {
    cout << "~Birthday()..." << endl;
    delete year;
    delete month;
    delete day;
  }

 private:
  int *year;
  int *month;
  int *day;
};

class Stu {
 public:
  Stu() {
    name = new char[1023];
    age = 18;
    cout << "Stu()..." << endl;
  }

  ~Stu() {
    delete[] name;
    cout << "~Stu()..." << endl;
  }

 private:
  char *name;
  int age;
  Birthday birthday;
};

int main() {
  {
    Stu s;
  }

  Stu *ps = new Stu;
  delete ps;

  return 0;
}
