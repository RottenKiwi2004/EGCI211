#include <iostream>
using namespace std;

#include "node.h"
#include "doubly.h"

int main() {
	DoublyLL ll;
	ll.print();
	ll.insert(13);
	ll.print();
	ll.insert(7);
	ll.print();
	ll.insert(27);
	ll.print();

	ll.remove(13);
	ll.print();
	ll.remove(27);
	ll.print();
	ll.remove(7);
	ll.print();
	ll.remove(10);
	ll.print();
	ll.insert(10);
	ll.print();
}