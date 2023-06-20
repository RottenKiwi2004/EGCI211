#include <iostream>
using namespace std;

#include "circular.h"

int main() {
	CircularLL ll;
	ll.insertNode(10);
	ll.insertNode(20);
	ll.insertNode(30);
	ll.insertNode(40);
	ll.insertNode(50);
	ll.insertNode(60);
	ll.printLoop(1);
}