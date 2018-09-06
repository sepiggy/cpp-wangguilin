#if 0
struct 默认权限全部是 public; class 默认权限全部是 private
#endif

#include <iostream>

using namespace std;

// FILO
struct Stack {
  int top;
  char space[1024];

  bool isFull();
  bool isEmpty();

  void push(char &ch);
  void pop();
};

int main() {

  return 0;
}
