#include "node.h"

class LinkedList
{
private:
    Node *head = NULL;
    Node *tail = NULL;

public:
    LinkedList();
    void insertNode(int id, std::string name);
    void insertFront(int id, std::string name);
    void printAll();
    ~LinkedList();
};

LinkedList::LinkedList()
{
    this->head = NULL;
    this->tail = NULL;
}

void LinkedList::insertNode(int id, std::string name)
{
    Node *node = new Node(id, name);
    if (this->head == NULL)
    {
        this->head = node;
        this->tail = this->head;
        return;
    }
    this->tail->setNext(node);
    this->tail = this->tail->getNext();
}

void LinkedList::insertFront(int id, std::string name)
{
    Node *node = new Node(id, name);
    if (this->head == NULL)
    {
        this->head = node;
        this->tail = node;
        return;
    }
    node->setNext(this->head);
    this->head = node;
}

void LinkedList::printAll()
{
    for (Node *temp = this->head; temp != NULL; temp = temp->getNext())
        std::cout << temp->toString() << " -> ";
    std::cout << "NULL" << std::endl;
}

LinkedList::~LinkedList()
{
    for (Node *temp = this->head; temp != NULL; temp = this->head)
    {
        this->head = this->head->getNext();
        delete temp;
    }
}