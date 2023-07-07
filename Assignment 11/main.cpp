#include <iostream>
#include <iomanip>
using namespace std;

#include "bst.h"


int main(int argc, char * argv[]) {
	BST bst;
	for(int i=1;i<argc;i++) bst.insert(atoi(argv[i]));
	bst.printDFS();
	cout << "--------------" << endl;
	bst.printInorder();
	cout << "--------------" << endl;
	bst.printPreorder();
	cout << "--------------" << endl;
	bst.printPostorder();
	cout << "--------------" << endl;
	bst.printGraphical();
}