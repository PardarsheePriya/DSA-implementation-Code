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

Node* buildTree(Node* root){
	
	cout << "Enter the data" << endl;
	int data;
	cin >> data;
	root = new Node(data);
	
	if(data == -1){
		return NULL;
	}
	
	//left Node
	cout << "Left Node" << endl;
	root->left = buildTree(root->left);
	
	//Right Node
	cout << "Right Node" << endl;
	root->right = buildTree(root->right);
	
	return root;
}

//Post Order Traversal: LRN

void postOrder(Node* &root){
	
	//base case
	if(root == NULL){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int main(){
	Node* root = NULL;
	root = buildTree(root);
	
	cout << "Post Order Traversal Output" << endl;
	postOrder(root);
}