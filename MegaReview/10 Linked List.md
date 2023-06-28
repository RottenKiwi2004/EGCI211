# Linked List

## Linked list vs Array

### Linked List

- Dynamic size
- Can insert in-between instantly
- Needs to track from first to each element; cannot access each element instantly

### Array

- Fixed size
- Need to move elements one by one to insert an element in-between
- Can access each element instantly

```cpp
class LinkedList {
public:
    Node * head = NULL;
    Node * tail = NULL;
    void insertBack(int n);
    void insertFront(int n);
    void printAll();
};
```

```mermaid
graph LR;
    HEAD-->NULL;
    TAIL-->NULL;
```

## Implementation of inserting to the back

```cpp
void LinkedList::insertBack(int n)
{
    Node *node = new Node(n);
    if (head == NULL)
        head = tail = node;
    else
    {
        tail->next = node;
        tail = node;
    }
}
```

## Implementation of inserting to the front

```cpp
void LinkedList::insertFront(int n)
{
    Node *node = new Node(n);
    if (head == NULL)
        head = tail = node;
    node->next = head;
    head = node;
}
```

## Printing all elements in linked list

```cpp
void LinkedList::printAll()
{
    for (Node *temp = head; temp != NULL; temp = temp->next)
        cout << temp->value << " -> ";
    cout << endl;
}
```

Ref: _[linkedList.cpp](./Code/linkedList.cpp)_
