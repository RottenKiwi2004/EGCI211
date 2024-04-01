class Node {
public:
    Node * next;
    Node * prev;
    int value;
    Node(int number) {
        this->value = number; 
        this->next = NULL;
        this->prev = NULL;
        }
};