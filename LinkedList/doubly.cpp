#include <iostream>
using namespace std;

#include "doubly.h"

int main() {
	DoublyLL ll;
	ll.insertBack(40);
	ll.insertBack(50);
	ll.insertBack(60);
	ll.insertFront(30);
	ll.insertFront(20);
	ll.insertFront(10);

	ll.printFrontToBack();
	ll.printBackToFront();
}