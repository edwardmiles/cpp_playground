#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x = 45;
    int *p = &x;
    int &y = x;

    cout << &y << endl;

    return 0;
}
