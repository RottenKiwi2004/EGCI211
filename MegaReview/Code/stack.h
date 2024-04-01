#include "stackNode.h"

class Stack {
private:
    Node * top;
public:
    Stack();
    void push(int);
    int pop();
};

Stack::Stack() {
    this->top = NULL;
}

void Stack::push(int number) {
    Node * newNode = new Node(number);
    newNode->next = top;
    top = newNode;
}

int Stack::pop() {
    Node * temp = this->top;
    this->top = this->top->next;
    int value = temp->value;
    delete temp;
    return value;
}