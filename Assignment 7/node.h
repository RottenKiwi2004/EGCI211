#include <iostream>
#include <string>

class Node
{
private:
    int id;
    std::string name;

    Node *next = NULL;

public:
    Node(int, std::string);

    std::string toString();

    Node *getNext();

    void setNext(Node *);

    ~Node();
};

Node::Node(int id, std::string name)
{
    this->id = id;
    this->name = name;
}

std::string Node::toString()
{
    return "(" + this->name + ", " + std::to_string(this->id) + ")";
}

Node *Node::getNext()
{
    return this->next;
}

void Node::setNext(Node *next)
{
    this->next = next;
}

Node::~Node()
{
    std::cout << this->name << " deleted" << std::endl;
}