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
	cout << "Deleting " << this->value << endl;
}

class CircularLL {
	private:
		Node * head = NULL;
		Node * tail = NULL;
		int size = 0;

	public:
		CircularLL();
		Node * getHead();
		int getSize();
		void insertNode(int);
		void printLoop(int count);
		~CircularLL();
};

CircularLL::CircularLL() {
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}

Node * CircularLL::getHead() {
	return this->head;
}

int CircularLL::getSize() {
	return this->size;
}

void CircularLL::insertNode(int value) {
	this->size++;
	Node * newNode = new Node(value);
	if(this->head == NULL) {
		this->head = newNode;
		this->tail = newNode;
		return;
	}
	newNode->setNext(this->head);
	this->tail->setNext(newNode);
	this->tail = this->tail->getNext();
}

void CircularLL::printLoop(int count) {
	for(Node * temp = this->head; temp!= this->head || count--; temp = temp->getNext())
		cout << temp->getValue() << " -> ";
	cout << endl;
}

CircularLL::~CircularLL() {
	this->tail->setNext(NULL);
	for(Node * temp = this->head; this->head != NULL; temp = this->head) {
		this->head = temp->getNext();
		delete temp;
		this->size--;
	}
}