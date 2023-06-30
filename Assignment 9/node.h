#ifndef node_h
#define node_h

class Node {
public:
	int value;
	Node * next = NULL;

	Node(int value) {this->value = value;}
};

#endif