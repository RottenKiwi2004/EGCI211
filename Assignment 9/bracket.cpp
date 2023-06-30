#include <iostream>
#include <string>
using namespace std;

#include "stack.h"

bool correctPair(char a, char b) {
	switch (a) {
		case '(':
			return a + 1 == b;
		case '[':
		case '{':
			return a + 2 == b;
	}
	return false;
}

int bracket(string str) {
	Stack stack;
	for(int i=0;i<str.size();i++) {
		switch(str[i]) {
			case '(':
			case '[':
			case '{':
				stack.push(str[i]);
				break;

			case ')':
			case ']':
			case '}':
				// Too many closing
				if(stack.empty()) return -1;
				char top = stack.getTop();
				stack.pop();
				// Wrong match
				if(!correctPair(top, str[i])) return 2147483647;
				break;
		}
	}
	// 1 Too many opening; 0 Correct
	return (int)(!stack.empty());
}

int main(int argc, char * argv[]) {

	// cin >> str;
	for(int i=1;i<argc;i++)

		switch(bracket(argv[i])) {
			case 0:
				cout << "Correct" << endl;
				break;
			case 1:
				cout << "Too many opening brackets" << endl;
				break;
			case -1:
				cout << "Too many closing brackets" << endl;
				break;
			case 2147483647:
				cout << "Wrong match" << endl;
				break;
		}
}