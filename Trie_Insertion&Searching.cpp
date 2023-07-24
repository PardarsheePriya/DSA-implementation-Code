#include <iostream>
using namespace std;

//Step 1: Define Trie Node structure

class TrieNode{
    
    public:
  
  TrieNode *children[26];       //assuming lower case english alphabet
  bool isTerminal;
  
  //constructor
  TrieNode(){
      isTerminal = false;
      for(int i = 0; i < 26; i++){
          children[i] = NULL;
      }
  }
};

//Step 2: Implement Trie class

class Trie{
    public:
    
    TrieNode *root;
    
    public:
    //constructor
    Trie(){
        root = new TrieNode();
    }
    
    
    //Step 3: Implement insertion operation
    
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
    
    //Step 4: Implement Search operation
    bool search(string word){
        TrieNode* current = root;
        for(char ch : word){
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
};

int main(){
    Trie t;
    t.insert("afdad");
    t.insert("apple");
    t.insert("app");
    t.insert("banana");
    
    cout << "Search 'apple': " << (t.search("apple") ? "Found" : "Not Found") << endl;
    cout << "Search 'app': " << (t.search("app") ? "Found" : "Not Found") << endl;
    cout << "Search 'banana': " << (t.search("banana") ? "Found" : "Not Found") << endl;
    cout << "Search 'orange': " << (t.search("orange") ? "Found" : "Not Found") << endl;

return 0;
}