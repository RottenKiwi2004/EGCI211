#include "node.h"

class CircularLL
{
private:
    Node *head = NULL, *tail = NULL;

public:
    void insert(int n);
    bool remove(int n);
    void print(int = 1);
};

void CircularLL::insert(int n)
{

    Node *newNode = new Node(n);

    if (head == NULL)
    {
        head = tail = newNode;
        tail->next = head;
        return;
    }
    if (n < head->value)
    {
        newNode->next = head;
        tail->next = newNode;
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != head && temp->next->value < n)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next = newNode;
    if (temp == tail)
        tail = newNode;
}

bool CircularLL::remove(int n)
{

    // Empty list
    if (head == NULL)
        return false;

    // Out of range
    if (n < head->value || n > tail->value)
        return false;

    // Delete head
    if (head->value == n)
    {
        tail->next = head->next;
        Node *temp = head;
        head = tail->next;
        delete temp;
        return true;
    }

    // Any other value in between
    Node *temp = head;
    for (int first = 1; temp->next->value != n && (temp != head || first--); temp = temp->next)
        ;

    // Not found
    if (temp->next->value != n)
        return false;

    // Found that number
    Node *toRemove = temp->next;
    temp->next = toRemove->next;

    // If that number is tail
    if (toRemove == tail)
        tail = temp;
    delete toRemove;
    return true;
}

void CircularLL::print(int round)
{
    for (Node *temp = head; temp != head || round--; temp = temp->next)
        cout << temp->value << " -> ";
    cout << "(head)" << endl;
}