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

int main(int argc, char *argv[])
{
    LinkedList ll;
    for (int i = 1; i < argc; i++)
    {
        ll.insert(atoi(argv[i]));
        ll.printAll();
    }
}