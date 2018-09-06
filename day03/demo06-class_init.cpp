#if 0
类的构造器
1. 构造器是 C++ 提供的一种构造机制, 不能单纯地把它当做特殊的函数
2. 与类名相同, 在对象生成的时候, 自动调用
3. 无返回值, 可以有参数
4. 可以有默认参数, 可以被重载
5. 在不指明特定构造器的情况下, 系统默认提供无参空体构造器; 无论重载还是默认参数, 应该把无参空体构造器包含进来
#endif

#include <iostream>
#include <string.h>

using namespace std;

class Stack {

 public:
//  Stack() {
//    top = 0;
//    space = new char[1024];
//    memset(space, 0, 1024);
//    spaceSize = 1024;
//  }

  // 构造器提供默认参数的情况 (ps. 优先使用默认参数)
  Stack(int size = 1024) {
    top = 0;
    space = new char[size];
    memset(space, 0, size);
    spaceSize = size;
  }

  bool isFull();
  bool isEmpty();
  void push(char ch);
  char pop();

 private:
  int top;
  char *space;
  int spaceSize;
};

bool Stack::isFull() {
  return top == spaceSize;
}

bool Stack::isEmpty() {
  return top == 0;
}

void Stack::push(char ch) {
  space[top++] = ch;
}

char Stack::pop() {
  return space[--top];
}

int main() {

  Stack s;

  for (char ch = 'a'; !s.isFull() && ch < 'm'; ch++) {
    s.push(ch);
  }

  while (!s.isEmpty())
    cout << s.pop() << "\t";
  cout << endl;

  Stack s2(10);

  for (char ch = 'a'; !s2.isFull() && ch <= 'z'; ch++) {
    s2.push(ch);
  }

  while (!s2.isEmpty()) {
    cout << s2.pop() << "\t";
  }

  return 0;
}