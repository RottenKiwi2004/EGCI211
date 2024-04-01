#include "nodeLL.h"

class DoublyLinkedList {
private:
    Node * head;
    Node * tail;
public:
    DoublyLinkedList();
    void insert(int number);
    void print();
    void printReversed();
};

DoublyLinkedList::DoublyLinkedList() {
    this->head = NULL;
    this->tail = NULL;
}

void DoublyLinkedList::insert(int number) {

    if (tail == NULL) {
        head = tail = new Node(number);
        return;
    }

    tail->next = new Node(number);
    tail->next->prev = tail;
    tail = tail->next;
}

void DoublyLinkedList::print() {
    for(Node * temp = head;
    temp != NULL;
    temp = temp->next)
        std::cout << temp->value << " ";
    std::cout <<  std::endl;
}

void DoublyLinkedList::printReversed()
{
    for(Node * temp = tail;
    temp != NULL;
    temp = temp->prev)
        std::cout << temp->value << " ";
    std::cout <<  std::endl;
}