#include <iostream>
using namespace std;

class TrieNode{
	
	public:
		TrieNode* children[26];
		bool isTerminal;
		
		//Constructor
		TrieNode(){
			isTerminal = false;
			for(int i = 0; i < 26; i++){
				children[i] = NULL;
			}
		}
		
};

class Trie{
	public:
		TrieNode* root;
		
		//Constructor
		Trie(){
			root = new TrieNode();
		}
		
		//member function: Insertion
		void insert(string word){
			TrieNode *current = root;
			for(char ch : word){
				int index = ch - 'a';
				
				if(!current->children[index]){
					current->children[index] = new TrieNode();
				}
				
				current = current->children[index];
			}
			current->isTerminal = true;
		}
		
		//Search function
		bool search(string word){
			TrieNode* current = root;
			for(char ch: word){
				int index = ch - 'a';
				
				if(!current->children[index]){
					return false;
				}
				current = current->children[index];
			}
			
			return current->isTerminal;
		}
		
		//Utlity func to check if a node has no children
    	bool checkChildren(TrieNode *node){
        	for(int i = 0; i < 26; i++){
            	if(node->children[i]){
                	return false;
            	}
        	}
        	return true;
    	}
    	
    	
    	//remove word function
    	
    	bool deleteWord(string word) {
        return deleteWord(word, root, 0);
    	}
    	
    	bool deleteWord(string word, TrieNode* current, int depth) {
        if (current == nullptr) {
            return false;
        }
        if (depth == word.length()) {
            if (current->isTerminal) {
                current->isTerminal = false;
                return true;
            }
            return false;
        }
        int index = word[depth] - 'a';
        bool canDelete = deleteWord(word, current->children[index], depth + 1);
        if (canDelete) {
            delete current->children[index];
            current->children[index] = nullptr;
            return !current->isTerminal && checkChildren(current);
        }
        return false;
    }
	
};

int main(){
	Trie t;
	t.insert("banana");
	t.insert("minion");
	t.insert("anki");
	t.insert("aniket");
	t.insert("yashi");
	
	cout << "Search 'apple': " << (t.search("apple") ? "Found" : "Not Found") << endl;
    cout << "Search 'app': " << (t.search("app") ? "Found" : "Not Found") << endl;
    cout << "Search 'banana': " << (t.search("banana") ? "Found" : "Not Found") << endl;
    cout << "Search 'orange': " << (t.search("orange") ? "Found" : "Not Found") << endl;
    
    t.deleteWord("minion");
    cout << "Search 'apple': " << (t.search("minion") ? "Found" : "Not Found") << endl;
    cout << "Search 'app': " << (t.search("aniket") ? "Found" : "Not Found") << endl;

    return 0;

}