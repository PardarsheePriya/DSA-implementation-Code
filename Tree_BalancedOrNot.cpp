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

bool isBalanced(Node* &root){
	
	if(root == NULL){
		return true;
	}
	
	bool left = isBalanced(root->left);
	bool right = isBalanced(root->right);
	
	bool diff = abs(height(root->left) - height(root->right)) <=1;
	
	if(left && right && diff){
		return true;
		
	}
	else{
		return false;
	}
}

int main(){
	
	Node* root = NULL;
	root = buildTree(root);
	
	bool answer = isBalanced(root);
	cout << answer << endl;
	
	return 0;
}