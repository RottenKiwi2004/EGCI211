#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next = NULL;
    Node(int n) { value = n; }
};

class LinkedList
{
public:
    Node *head = NULL;
    void insert(int n);
    void printAll();
    void remove(int n);
};

void LinkedList::insert(int n)
{
    Node *node = new Node(n);

    // First element
    if (head == NULL)
    {
        head = node;
        return;
    }

    // Head is larger than the new node
    if (head->value > n)
    {
        node->next = head;
        head = node;
        return;
    }

    // More than two elements
    Node *temp = head;
    while (temp->next != NULL && temp->next->value < n)
        temp = temp->next;

    node->next = temp->next;
    temp->next = node;
}

void LinkedList::printAll()
{
    for (Node *temp = head; temp != NULL; temp = temp->next)
        cout << temp->value << " -> ";
    cout << "X" << endl;
}

void LinkedList::remove(int n)
{
    Node *temp = head;
    while (temp->next != NULL && temp->next->value != n)
        temp = temp->next;

    Node *temp2 = temp->next;
    temp->next = temp->next->next;
    delete temp2;
}

int main(int argc, char *argv[])
{
    LinkedList ll;
    // for (int i = 1; i < argc; i++)
    // {
    ll.insert(1);
    ll.printAll();
    ll.insert(3);
    ll.printAll();
    ll.insert(5);
    ll.printAll();
    ll.insert(2);
    ll.printAll();
    ll.insert(7);
    ll.printAll();
    ll.insert(6);
    ll.printAll();

    ll.remove(3);
    ll.printAll();
    ll.insert(4);
    ll.printAll();
    // }
}