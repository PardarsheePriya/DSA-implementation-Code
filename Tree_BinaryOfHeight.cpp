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
	cout << "Enter data" << endl;
	int data;
	cin >> data;
	
	root = new Node(data);
	if(data == -1){
		return NULL;
	}
	
	//left node
	cout <<  "Left Node" << endl;
	root->left = buildTree(root->left);
	
	//Right Node
	cout << "Right Node" << endl;
	root->right = buildTree(root->right);
	
	return root;
}

int height(Node* &root){
	
	//base case
	if(root == NULL){
		return 0;
	}
	
	//left subtree
	int leftTree = height(root->left);
	
	//right subtree
	int rightTree = height(root->right);
	
	int ans = max(leftTree, rightTree) + 1;
	
	return ans;
}

int main(){
	
	Node* root = NULL;
	root = buildTree(root);
	int h = height(root);
	cout << "Height of Tree: " << h << endl;
	
	return 0;
}