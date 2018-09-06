#include <iostream>

using namespace std;

int main() {

  string str = "china";
  cout << str[3] << endl;

  char buf[1024];
  strcpy(buf, str.c_str());
  cout << buf << endl;

  return 0;
}