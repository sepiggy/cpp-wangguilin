#include "mylist.h"
#include <iostream>

using namespace std;

void List::init() {
  head = new Node;
  head->next = nullptr;
}

void List::insert(int data) {
  Node *cur = new Node;
  cur->data = data;

  cur->next = head->next;
  head->next = cur;
}

void List::traverse() {
  Node *subHead = head->next;

  while (subHead) {
    cout << subHead->data << endl;
    subHead = subHead->next;
  }
}