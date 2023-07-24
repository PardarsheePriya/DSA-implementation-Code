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
			this->left = left;
			this->right = right;
		}
};

Node* buildTree(Node* &root){
	
	cout << "Enter the data: " << endl;
	int data; 
	cin >> data;
	
	root = new Node(data);
	
	if(data == -1){
		return NULL;
	}
	
	//left node
	cout << "Enter the data for left insertion" << endl;
	root->left = buildTree(root->left);			//recursion call
	
	//right node
	cout << "Enter the data for right insertion" << endl;
	root->right = buildTree(root->right);		//recursion call
	
	return root;
}

int main(){
	
	Node* root = NULL;
	root = buildTree(root);
}