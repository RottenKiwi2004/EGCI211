#ifndef doubly_h
#define doubly_h

#include "node.h"

class DoublyLL {
private:
	Node * head = NULL;
	Node * tail = NULL;

	void insertBetween(Node * newNode, Node * prev, Node * next);

public:
	~DoublyLL();
	bool isEmpty();
	void insert(int);
	void remove(int);
	void print();
	void printRev();
};

bool DoublyLL::isEmpty() {
	return this->head == NULL;
}

void DoublyLL::insertBetween(Node * newNode, Node * prev, Node * next) {
	newNode->setPrev(prev);
	newNode->setNext(next);
	if(prev != NULL)prev->setNext(newNode);
	if(next != NULL)next->setPrev(newNode);
}

void DoublyLL::insert(int value) {
	Node * newNode = new Node(value);

	// Empty
	if(this->isEmpty()) {
		this->head = this->tail = newNode;
		return;
	}
	
	// Insert at head
	if(value < this->head->getData()) {
		this->head->setPrev(newNode);
		newNode->setNext(this->head);
		this->head = newNode;
	}

	// Insert at tail
	else if(value > this->tail->getData()) {
		this->tail->setNext(newNode);
		newNode->setPrev(this->tail);
		this->tail = newNode;
	}

	// Other Cases
	else {
		Node * temp;
		for(temp = this->head; temp->getNext() != NULL && temp->getData() < value; temp = temp->getNext());
		Node *tempPrev = temp->getPrev();
		this->insertBetween(newNode, tempPrev, temp);
	}
	
}

void DoublyLL::remove(int value) {
	// Find node
	Node * temp;
	for(temp = this->head; temp != NULL && temp->getData() != value; temp = temp->getNext());

	// Not found
	if(temp == NULL) return;

	if (temp != this->tail) temp->getNext()->setPrev(temp == this->head ? NULL: temp->getPrev());
	// Found at tail
	else this->tail = this->tail->getPrev();
	
	if (temp != this->head) temp->getPrev()->setNext(temp == this->tail ? NULL: temp->getNext());
	// Found at head
	else this->head = this->head->getNext();
	
	delete temp;
}

void DoublyLL::print() {
	for(Node * temp = this->head; temp != NULL; temp = temp->getNext())
		cout << temp->getData() << " <--> ";
		cout << "X" << endl;
}

void DoublyLL::printRev() {
	for(Node * temp = this->tail; temp != NULL; temp = temp->getPrev())
		cout << temp->getData() << " <--> ";
		cout << "X" << endl;
}

DoublyLL::~DoublyLL() {
	for(Node * temp = this->head; this->head != NULL; temp = this->head){
		this->head = this->head->getNext();
		delete temp;
	}
}

#endif