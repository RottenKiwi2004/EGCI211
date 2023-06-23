#include <iostream>
using namespace std;

#define SIZE 4

int main()
{

    int a[SIZE] = {15, 45, 70, 96};
    int *p = a;

    for (int i = 0; i < SIZE; i++)
        cout << a[i] << endl;

    cout << "----------" << endl;

    for (int i = 0; i < SIZE; i++)
        cout << *(p + i) << endl;

    cout << "----------" << endl;

    for (int i = 0; i < SIZE; i++)
        cout << *p + i << endl;
}