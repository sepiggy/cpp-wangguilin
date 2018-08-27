#include <iostream>
using namespace std;

void
func(int a)
{
    printf("a = %d\n", a);
}

void
func(int *p)
{
    printf("p = %d\n", p);
}

int
main()
{
    func(1);

    func((int *) 1);

//    func(0);
    func(nullptr);
    return 0;
}