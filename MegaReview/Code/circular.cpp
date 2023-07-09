#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next = NULL;
    Node(int n);
};

Node::Node(int n)
{
    value = n;
}

class LinkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void insertBack(int n);
    void insertFront(int n);
    void printAll(int = 1);
};

void LinkedList::insertBack(int n)
{
    Node *node = new Node(n);
    if (head == NULL)
        head = tail = node;
    else
    {
        tail->next = node;
        node->next = head;
        tail = node;
    }
}

void LinkedList::insertFront(int n)
{
    Node *node = new Node(n);
    if (head == NULL)
        head = tail = node;
    else
    {
        node->next = head;
        tail->next = node;
        head = node;
    }
}

void LinkedList::printAll(int loops)
{
    if (head != NULL)
    {
        if (head == tail)
            cout << head->value << " -> ";
        else
            for (Node *temp = head; temp != head || loops--; temp = temp->next)
                cout << temp->value << " -> ";
    }
    cout << "X" << endl;
}

int main()
{
    LinkedList ll;

    ll.printAll();
    ll.insertBack(40);
    ll.printAll();
    cout << "Test" << endl;
    ll.insertBack(50);
    ll.printAll();
    ll.insertBack(60);
    ll.printAll();
    ll.insertFront(30);
    ll.printAll();
    ll.insertFront(20);
    ll.printAll();
    ll.insertFront(10);
    ll.printAll(3);
}