#ifndef bst_h
#define bst_h

#define BST_NodeType int

class Node {
public:
	BST_NodeType value;
	Node(BST_NodeType);
	Node *left = NULL, *right = NULL;
	~Node() {cout << "Killed " << value << endl;} 
};

Node::Node(BST_NodeType tmp) {
	value = tmp;
}

class BST {
private:
	Node * root = NULL;
	void insert(BST_NodeType, Node*);
	void printDFS(Node *, int = 0);
	void printPreorder(Node *);
	void printInorder(Node *);
	void printPostorder(Node *);
	void printGraphical(Node *, int = 0);
	void kill(Node *);
public:
	void insert(BST_NodeType);
	void printDFS();
	void printPreorder();
	void printInorder();
	void printPostorder();
	void printGraphical();
	~BST();
};

void BST::insert(BST_NodeType value) {
	if(root != NULL)
		insert(value, root);
	else {
		root = new Node(value);
	}
}

void BST::insert(BST_NodeType value, Node *newRoot) {
	Node * nextPosition = NULL;
	BST_NodeType rootVal = newRoot->value;
	if(value > rootVal && newRoot->right == NULL) {
		newRoot->right = new Node(value);
		return;
	}
	if(value <= rootVal && newRoot->left == NULL) {
		newRoot->left = new Node(value);
		return;
	}
	insert(value, value > rootVal ? newRoot->right : newRoot->left);
}

void BST::printDFS() {
	cout << setfill('-');
	printDFS(root);
}

void BST::printDFS(Node * newRoot, int level) {
	if(newRoot == NULL) {cout << 'X' << endl; return;}
	cout << newRoot->value << endl;
	cout << setw(level + 1); cout << "L:";
	printDFS(newRoot->left, level+1);
	cout << setw(level + 1); cout << "R:";
	printDFS(newRoot->right, level+1);
}

void BST::printPreorder() {
	printPreorder(root);
}

void BST::printPreorder(Node * newRoot) {
	if(newRoot == NULL) return;
	cout << newRoot->value << endl;
	printPreorder(newRoot->left);
	printPreorder(newRoot->right);
}

void BST::printInorder() {
	printInorder(root);
}

void BST::printInorder(Node * newRoot) {
	if(newRoot == NULL) return;
	printInorder(newRoot->left);
	cout << newRoot->value << endl;
	printInorder(newRoot->right);
}

void BST::printPostorder() {
	printPostorder(root);
}

void BST::printPostorder(Node * newRoot) {
	if(newRoot == NULL) return;
	printPostorder(newRoot->left);
	printPostorder(newRoot->right);
	cout << newRoot->value << endl;
}

void BST::printGraphical() {
	cout << setfill(' ');
	printGraphical(root);
}

void BST::printGraphical(Node * newRoot, int level) {
	if(newRoot == NULL) {cout << setw(level * 3) << 'X' << endl; return;}
	printGraphical(newRoot->right, level+1);
	cout << setw(level * 3) << newRoot->value << endl;
	printGraphical(newRoot->left, level+1);
}

BST::~BST() {
	kill(root);
	cout << "Killed BST" << endl;
}

void BST::kill(Node * newRoot) {
	if(!newRoot) return;
	kill(newRoot->left);
	kill(newRoot->right);
	delete newRoot;
}

#endif