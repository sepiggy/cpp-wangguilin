#include <iostream>

using namespace std;

int main() {
  FILE *pf = fopen("/Users/Jms/CLionProjects/cpp-wangguilin/day02/demo20_test.txt", "r+");

  if (pf == nullptr) {
    cout << "open error" << endl;
    exit(-1);
  }

  string s;
  char buf[1024];
  fgets(buf, 1024, pf);
  s = buf;
  cout << s << endl;

  return 0;
}

