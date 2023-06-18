#include <bits/stdc++.h>

using namespace std;

#include "linkedList.h"

int main(int argc, char *argv[])
{
    LinkedList ll;
    for (int i = 1; i < argc; i += 2)
    {
        int id = atoi(argv[i]);
        string name = argv[i + 1];
        ll.insertNode(id, name);
    }
    ll.printAll();
    ll.insertFront(0, "Z");
    ll.printAll();
}