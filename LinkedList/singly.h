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

class SinglyLL {
	private:
		Node * head = NULL;
		Node * tail = NULL;
		int size = 0;

	public:
		SinglyLL();
		Node * getHead();
		int getSize();
		void insertNode(int);
		void printAll();
		~SinglyLL();
};

SinglyLL::SinglyLL() {
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}

Node * SinglyLL::getHead() {
	return this->head;
}

int SinglyLL::getSize() {
	return this->size;
}

void SinglyLL::insertNode(int value) {
	this->size++;
	Node * newNode = new Node(value);
	if(this->head == NULL) {
		this->head = newNode;
		this->tail = newNode;
		return;
	}
	this->tail->setNext(newNode);
	this->tail = this->tail->getNext();
}

void SinglyLL::printAll() {
	for(Node * temp = this->head; temp != NULL; temp = temp->getNext())
		cout << temp->getValue() << " -> ";
	cout << endl;
}

SinglyLL::~SinglyLL() {
	for(Node * temp = this->head; this->head != NULL; temp = this->head) {
		this->head = temp->getNext();
		delete temp;
		this->size--;
	}
}