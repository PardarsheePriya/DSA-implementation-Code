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

//Create Tree

Node* buildTree(Node* &root){
	
	cout << "Enter data: " << endl;
	int data;
	cin >> data;
	
	root = new Node(data);
	//Creating leaf Nodes
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

int height(Node* &root){
	
	if(root == NULL){
		return 0;
	}
	
	int l = height(root->left);
	int r = height(root->right);
	int ans = max(l, r) + 1;
	
	return ans;
}

//Diameter of Binary Tree

int diameter(Node* &root){
	
	//base case
	if(root == NULL){
		return 0;
	}
	
	int l = diameter(root->left);
	int r = diameter(root->right);
	
	int combo = height(root->left) + 1 + height(root->right);
	
	int answer = max(l, max(r, combo));
	
	return answer;
}
int main(){
	
	Node* root = NULL;
	root = buildTree(root);
	
	int d = diameter(root);
	
	cout << "Diameter of Tree: " << d << endl;
	
	return 0;
}