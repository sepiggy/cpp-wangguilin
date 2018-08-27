#include <iostream>

int
main()
{
    char *p = (char *) malloc(100);

    const int a = 100;

    const int *q = &a;

//    *q = 200;

    int arr[2][3];
    int (*pa)[3] = arr;

    return 0;
}