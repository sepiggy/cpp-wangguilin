#include <iostream>

using namespace std;

int main() {
  double *pd[50];

  try {
    for (int i = 0; i < 50; i++) {
      pd[i] = new double[500000000000];
      cout << i << endl;
    }
  } catch (std::bad_alloc &e) {
    cout << e.what() << endl;
    cout << __FILE__ << " " << __FUNCTION__ << " " << __LINE__ << endl;
    exit(-1);
  }

  return 0;
}
