#include <iostream>

using namespace std;

int
main() {
  int *p = new int;
  delete p;

  int **pp = new int *[10];
  delete[]pp;

//  int (*ppp)[5] = new int[3][5];
//  delete[]ppp;

  string *s = new string("china");
  cout << s << endl;
  cout << *s << endl;

  char *q = "china";
  cout << q << endl;
  cout << *q << endl;

  return 0;
}