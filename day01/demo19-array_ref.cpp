#include <iostream>

using namespace std;

int
main ()
{
  int arr[10] = {1, 2, 3, 4};

  int *const &rarr = arr;

  for (int i = 0; i < 10; i++)
    {
      cout << rarr[i] << endl;
    }

  int (&rarr2)[10] = arr;

  cout << "sizeof(rarr2) = " << sizeof (rarr2) << ", sizeof(arr) = " << sizeof (arr) << endl;

  return 0;
}