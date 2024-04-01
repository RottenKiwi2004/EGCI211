#include "nodeLL.h"

class LinkedList {
private:
    Node * head;
public:
    LinkedList();
    void insert(int number);
    void print();
};

LinkedList::LinkedList() {
    this->head = NULL;
}

void LinkedList::insert(int number) {

    if (head == NULL) {
        head = new Node(number);
        return;
    }

    Node * temp;
    for(temp = head;
        temp->next != NULL && temp->next->value < number;
        temp = temp->next);

    Node * next = temp->next;
    temp->next = new Node(number);
    temp->next->next = next;
}

void LinkedList::print() {
    for(Node * temp = head;
    temp != NULL;
    temp = temp->next)
        std::cout << temp->value << " ";
    std::cout <<  std::endl;
}