class Node {
public:
    int value;
    Node * left;
    Node * right;
    Node(int number) { this->value = number; this->left = NULL; this->right = NULL;}
};