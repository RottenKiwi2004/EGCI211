#include <iostream>
using namespace std;

#include "singly.h"

int main() {
	SinglyLL ll;
	ll.insertNode(10);
	ll.insertNode(20);
	ll.insertNode(30);
	ll.insertNode(40);
	ll.insertNode(50);
	ll.insertNode(60);
	ll.printAll();
}