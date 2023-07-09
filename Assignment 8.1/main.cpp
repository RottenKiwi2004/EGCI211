#include <iostream>
using namespace std;

#include "circular.h"

int main()
{
    CircularLL ll;

    ll.insert(5);
    ll.insert(1);
    ll.insert(3);
    ll.insert(7);
    ll.print();
    ll.remove(7);
    ll.print();
}