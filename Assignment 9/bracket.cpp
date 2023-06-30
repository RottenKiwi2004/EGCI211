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

bool bracket(string str) {
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
				if(stack.empty()) return false;
				char top = stack.getTop();
				stack.pop();
				if(!correctPair(top, str[i])) return false;
				break;
			default:
				continue;
		}
	}
	return stack.empty();
}

int main(int argc, char * argv[]) {
	string str = "";

	// cin >> str;
	for(int i=1;i<argc;i++)
		str += string(argv[i]);

	cout << (bracket(str) ? "Correct" : "Incorrect") << endl;
}