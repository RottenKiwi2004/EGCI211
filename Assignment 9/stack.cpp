#include <iostream>
using namespace std;

#include "stack.h"

int main(int argc, char * argv[]) {
	Stack stack;
	for(int i=1;i<argc;i++) {
		if(argv[i][0] == 'x') stack.pop();
		else stack.push(atoi(argv[i]));
		stack.print();
	}
}