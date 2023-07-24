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
	
	//left Tree
	cout << "Left Tree" << endl;
	buildTree(root->left);
	
	//Right Tree
	cout << "Right Tree" << endl;
	buildTree(root->right);
	
	return root;
}

void morrisTraversal(Node* &root){
	
	Node* curr = root;
	
	while(curr != NULL){
		
		if(curr->left){
			Node* pred = curr->left;
			
			while(pred->right){
				pred = pred->right;
			}
			pred->right = curr->right;
			curr->right = curr->left;
		}
		curr = curr->right;
	}
	//Left wala NULL
	
	curr = root;
	while(curr != NULL){
		curr->left = NULL;
		curr = curr->right;
	}
}

void print(Node* &root){
	
	Node* temp = root;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->right;
	}
}

int main(){
	
	Node* root = NULL;
	root = buildTree(root);
	morrisTraversal(root);
	cout << "Morris Traversal" << endl;
	print(root);
	
	
	return 0;
	
}