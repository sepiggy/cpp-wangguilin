#include <iostream>
#include <iomanip>

using namespace std;

int
main()
{
    float f = 1.234;
    cout << setw(10) << setiosflags(ios::left) << f << "****" << endl;

    return 0;
}

#if 0
int
main()
{
    int data = 1234;

    cout << data << endl;
    cout << hex << data << endl;
    cout << oct << data << endl;
    cout << dec << data << endl;
    return 0;
}
#endif