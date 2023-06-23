#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *p, *q;

    p = &a;
    q = &b;

    a = 5;

    *q = *p + 10;

    (*p) += 2;

    cout << a << " " << b << endl;
    cout << *p << " " << *q << endl;
}