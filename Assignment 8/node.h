#ifndef node_h
#define node_h

class Node {
private:
	int value;
	Node * nextPtr = NULL;
	Node * prevPtr = NULL;

public:
	Node(int = 0);
	~Node();
	Node * getPrev();
	Node * getNext();
	int getData();
	void setPrev(Node *);
	void setNext(Node *);
};

Node::Node(int value) {
	this->value = value;
}

Node::~Node() {
	std::cout << this->value << " deleted" << std::endl;
}

Node * Node::getPrev() {
	return this->prevPtr;
}

Node * Node::getNext() {
	return this->nextPtr;
}

int Node::getData() {
	return this->value;
}

void Node::setPrev(Node * prev) {
	this->prevPtr = prev;
}

void Node::setNext(Node * next) {
	this->nextPtr = next;
}

#endif