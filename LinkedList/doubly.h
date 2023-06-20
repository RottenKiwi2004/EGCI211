class Node {
	private:
		int value;
		Node * next = NULL;
		Node * prev = NULL;
	public:
		Node(int);
		Node * getNext();
		Node * getPrev();
		void setNext(Node *);
		void setPrev(Node *);
		int getValue();
		~Node();
};

Node::Node(int value) {
	this->value = value;
}

Node * Node::getNext() {
	return this->next;
}

Node * Node::getPrev() {
	return this->prev;
}

void Node::setNext(Node * next) {
	this->next = next;
}

void Node::setPrev(Node * prev) {
	this->prev = prev;
}

int Node::getValue() {
	return this->value;
}

Node::~Node() {
	cout << "Deleting " << this->value << endl;
}

class DoublyLL {
	private:
		Node * head = NULL;
		Node * tail = NULL;
		int size = 0;

	public:
		DoublyLL();
		Node * getHead();
		int getSize();
		void insertBack(int);
		void insertFront(int);
		void printBackToFront();
		void printFrontToBack();
		~DoublyLL();
};

DoublyLL::DoublyLL() {
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}

Node * DoublyLL::getHead() {
	return this->head;
}

int DoublyLL::getSize() {
	return this->size;
}

void DoublyLL::insertFront(int value) {
	this->size++;
	Node * newNode = new Node(value);
	newNode->setNext(this->head);
	if(this->head == NULL) {
		this->head = newNode;
		this->tail = newNode;
		return;
	}
	this->head->setPrev(newNode);
	this->head = this->head->getPrev();
}

void DoublyLL::insertBack(int value) {
	this->size++;
	Node * newNode = new Node(value);
	newNode->setPrev(this->tail);
	if(this->head == NULL) {
		this->head = newNode;
		this->tail = newNode;
		return;
	}
	this->tail->setNext(newNode);
	this->tail = this->tail->getNext();
}

void DoublyLL::printFrontToBack() {
	for(Node * temp = this->head; temp != NULL; temp = temp->getNext())
		cout << temp->getValue() << " <--> ";
	cout << endl;
}

void DoublyLL::printBackToFront() {
	for(Node * temp = this->tail; temp != NULL; temp = temp->getPrev())
		cout << temp->getValue() << " <--> ";
	cout << endl;
}

DoublyLL::~DoublyLL() {
	for(Node * temp = this->head; this->head != NULL; temp = this->head) {
		this->head = temp->getNext();
		delete temp;
		this->size--;
	}
}