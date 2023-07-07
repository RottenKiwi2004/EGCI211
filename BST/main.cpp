#include <iostream>
#include <iomanip>
using namespace std;

#include "bst.h"

int test[] = {8, 4, 2, 1, 3, 6, 5, 7, 12, 10, 9, 11, 14, 13, 15};

int main(int argc, char * argv[]) {
	BST bst;
	if(argc == 1)
		for(int i=0;i<15;i++) bst.insert(test[i]);
	else
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