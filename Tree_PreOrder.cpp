#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		//Constructor
		Node(int d){
			this->data = d;
			this->left = NULL;
			this->right = NULL;
		}
};

Node* buildTree(Node* &root){
	cout << "Enter the data" << endl;
	int data;
	cin >> data;
	
	root = new Node(data);
	
	if(data == -1){
		return NULL;
	}
	
	// left Node
	cout << "Left Node" << endl;
	root->left = buildTree(root->left);
	
	//Right Node
	cout << "Right Node" << endl;
	root->right = buildTree(root->right);
	
	return root;
}

//PreOrder: NLR
void preOrder(Node* &root){
	
	if(root == NULL){
		return;
	}
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

int main(){
	
	Node* root = NULL;
	root = buildTree(root);
	
	//PreOrder Traversal
	
	cout << "Pre Order Traversal Output" << endl;
	preOrder(root);
	
	return 0;
}