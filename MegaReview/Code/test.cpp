#include <bits/stdc++.h>
#include "bst.h"
using namespace std;

int main(int argc, char ** argv) {
    BinarySearchTree bst;
    for(int i=1; i<argc; i++)
    {
        int input = atoi(argv[i]);
        // if (input)
        bst.insert(input);
        // else
            // cout << "Pop: " << q.pop() << endl;

        // q.debug();
    }

    // ll.printReversed();
    bst.preOrder();
    cout << endl;
    bst.inOrder();
    cout << endl;
    bst.postOrder();
    cout << endl;
}