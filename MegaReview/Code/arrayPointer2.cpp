#include <iostream>
using namespace std;

#define SIZE 10

int main()
{
    int a[SIZE] = {0, 10, 20, 30, 40};
    int *p = &a[5];
    *p = 50;
    *(p + 1) = 60;
    *(p + 2) = 70;
    p[3] = 80;
    *(p + 4) = 90;

    for (int i = 0; i < SIZE; i++)
        cout << a[i] << endl;

    p = a;

    p++;
    cout << *p << endl;
    p += 3;
    cout << *p << endl;
    *p -= 17;
    cout << *p << endl;
    *(p - 1) = 45;
    cout << *p << endl;
    p -= 4;

    cout << *(p + 2) << endl;
    cout << *(p + 7) + 50 << endl;
    cout << p[3] << endl;
}