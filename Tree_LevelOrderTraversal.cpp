#include <iostream>
#include <queue>

using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int d){
			this->data = d;
			this->left = NULL;
			this->right = NULL;
		}
};
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

Node* buildTree(Node* root){
	
	cout << "Enter the data: ";
	int data;
	cin >> data;
	
	root = new Node(data);
	
	if(data == -1){
		return NULL;
	}
	
	//left Node
	cout << "Left Node" << endl;
	root->left = buildTree(root->left);
	
	//right Node
	cout << "Right Node" << endl;
	root->right = buildTree(root->right);
	
	return root;
}

void levelOrder(Node* root){
	
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		
		if(temp == NULL){
			cout << endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout << temp->data << " ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}

int main(){
	
	Node* root = NULL;
	root = buildTree(root);
	
	cout << "Level Order Traversal Output" << endl;
	levelOrder(root);
}