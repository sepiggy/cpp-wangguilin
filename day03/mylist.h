#ifndef CPP_WANGGUILIN_MYLIST_H
#define CPP_WANGGUILIN_MYLIST_H

struct Node {
  int data;
  struct Node *next;
};

class List {
 public:
  void init();
  void insert(int data);
//  Node *search();
  void traverse();
//  void destroy();

 private:
  Node *head;
};

#endif //CPP_WANGGUILIN_MYLIST_H
