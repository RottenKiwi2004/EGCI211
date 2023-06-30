#ifndef stack_h
#define stack_h

#include "node.h"

class Stack {
private:
	Node * top = NULL;

public:
	void pop();
	void push(int);
	bool empty();
	int getTop();
	void print();
};

bool Stack::empty() {
	return this->top == NULL;
}

int Stack::getTop() {
	return this->empty() ? 0 : this->top->value;
}

void Stack::push(int n) {
	Node * newNode = new Node(n);

	if(this->top == NULL){
		this->top = newNode;
		return;
	}
	newNode->next = this->top;
	this->top = newNode;
}

void Stack::pop() {
	if(this->top == NULL) return;
	
	cout << "Popping: " << this->top->value << endl;

	Node * temp = this->top;
	this->top = this->top->next;
	delete temp;
}

void Stack::print() {
	for(Node * temp = this->top; temp != NULL; temp = temp->next)
		cout << temp->value << "->";
	cout << "X" << endl;
}

#endif