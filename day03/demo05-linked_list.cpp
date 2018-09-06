#if 0
使用 C++ 实现单向链表
#endif

#include <iostream>
#include "mylist.h"
using namespace std;

int main() {
  List l;
  l.init();

  for (int i = 0; i < 10; i++)
    l.insert(i);

  l.traverse();

  l.traverse();

  return 0;
}
