
//LCA: Lowest Common Ancestor

Node* lca(Node* &root, int n1, int n2){
	
	//base case
	if(root == NULL){
		return NULL;
	}
	
	if(root->data == n1 || root->data == n2){
		return root;
	}
	
	Node* rootLeft = lca(root->left, n1, n2);
	Node* rootRight = lca(root->right, n1, n2);
	
	//Conditions after finding left and right rooots
	
	if(rootLeft != NULL && rootRight != NULL){
		return root;
	}
	else if(rootLeft != NULL && rootRight == NULL){
		return rootLeft;
	}
	else if(rootLeft == NULL && rootRight != NULL){
		return rootRight;
	}
	else{
		return NULL;
	}
}

//K Sum Paths
void solve(Node* root, int k, int &count, vector<int>path){
        
        //base case
        if(root == NULL){
            return NULL;
        }
        
        path.push_back(root->data);
        
        //left
        solve(root->left, k, count, path);
        
        //right 
        solve(root->right, k, count, path);
        
        //check for k sum
        
        int sum = 0;
        int size = path.size();
        
        for(int i = size-1; i >= 0; i--){
            sum = sum + path[i];
            
            if(sum == k){
                count++;
            }
        }
        
        //to remove while going back in tree
        path.pop_back();
        
    }
    int sumK(Node *root,int k)
    {
        // code here 
        vector<int>path;
        int count = 0;
        solve(root, k, count, path);
        
        return count;
        
    }