#include "bstNode.h"

class BinarySearchTree {

private:
    Node * root;

public:
    BinarySearchTree();
    void insert(int number);
    void preOrder(Node * root);
    void inOrder(Node * root);
    void postOrder(Node * root);
    void preOrder() {this->preOrder(this->root);}
    void inOrder() {this->inOrder(this->root);}
    void postOrder() {this->postOrder(this->root);}
};

BinarySearchTree::BinarySearchTree() {
    this->root = NULL;
}

void BinarySearchTree::insert(int number) {
    if (this->root == NULL) {
        this->root = new Node(number);
        return;
    }

    Node * temp = this->root;
    Node * prev = temp;
    while(temp) {
        prev = temp;
        if (temp->value > number) temp = temp->left;
        else temp = temp->right;
    }
    if (number > prev->value)
        prev->right = new Node(number);
    else
        prev->left = new Node(number);
}

void BinarySearchTree::preOrder(Node * root) {
    if (!root) return;
    std::cout << root->value << " ";
                  
    this->preOrder(root->right);
}

void BinarySearchTree::inOrder(Node * root) {
    if (!root) return;
    this->inOrder(root->left);
    std::cout << root->value << " ";
    this->inOrder(root->right);
}
void BinarySearchTree::postOrder(Node * root) {
    if (!root) return;
    this->postOrder(root->left);
    this->postOrder(root->right);
    std::cout << root->value << " ";
}