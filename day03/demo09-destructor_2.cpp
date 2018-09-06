#include <iostream>

using namespace std;

class Stack {
 public:
  Stack(int size = 1024)
      : top(0),
        spaceSize(size),
        space(new char[size]{0}) {
    cout << "构造器被调用" << endl;
  }

  ~Stack() {
    cout << "析构器被调用" << endl;
    delete[] space;
  }

 private:
  int top;
  int spaceSize;
  char *space;
};

int main() {

  {
    // 栈对象
    Stack s;
  }

  // 堆对象
  Stack *ps = new Stack(1000);
  delete ps;

  return 0;
}