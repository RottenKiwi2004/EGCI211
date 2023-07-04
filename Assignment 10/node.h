class Node {
	private:
		int value;
		Node * next = NULL;
	public:
		Node(int);
		Node * getNext();
		void setNext(Node *);
		int getValue();
		~Node();
};

Node::Node(int value) {
	this->value = value;
}

Node * Node::getNext() {
	return this->next;
}

void Node::setNext(Node * next) {
	this->next = next;
}

int Node::getValue() {
	return this->value;
}

Node::~Node() {
	// std::cout << "Deleting " << this->value << std::endl;
}