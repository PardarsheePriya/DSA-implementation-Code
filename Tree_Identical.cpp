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
	
	cout << "Enter the data " << endl;
	int data;
	cin >> data;
	
	root = new Node(data);
	
	if(data == -1){
		return NULL;
	}
	
	//left Node
	cout << "Left Node" << endl;
	buildTree(root->left);
	
	//Right Node
	cout << "Right Node" << endl;
	buildTree(root->right);
	
	return root;
}

bool identicalTree(Node* &r1, Node* &r2){
	
	if(r1 == NULL && r2 == NULL){
		return true;
	}
	if(r1 == NULL && r2 != NULL){
		return false;
	}
	if(r1 != NULL && r2 == NULL){
		return false;
	}
	
	bool left = identicalTree(r1->left, r2->left);
	bool right = identicalTree(r1->right, r2->right);
	
	bool val = r1->data == r2->data;
	
	if(left && right && val){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	
	Node* r1 = NULL;
	Node* r2 = NULL;
	
	//Creating Nodes
	r1 = buildTree(r1);
	r2 = buildTree(r2);
	
	bool ans = identicalTree(r1, r2);
	cout << "Identical: " << ans << endl;
}