#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 2, c = 5;

    int d = ++b + a-- + ++c - a-- + b++ - --b + --c;

    cout << d;

    return 0;
}
