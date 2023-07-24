#include <iostream>
using namespace std;

class Node{
	
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};

class Stack{
	
	public:
		Node* top;
		
		Stack(){
			this->top = NULL;
		}
		
		//member functions
		
		void push(int data){
			
			Node* new_data = new Node(data);
			if(top == NULL){
				top = new_data;
			}
			else{
				new_data->next = top;
				top = new_data;
			}
		}
		
		int pop(){
			if(top == NULL){
				return -1;
			}
			else{
				int val = top->data;
				Node* temp = top;
				top = top->next;
				delete(temp);
				
				return val;
			}
		}
		
		int peek(){
			if(top == NULL){
				return -1;
			}
			else{
				return top->data;
			}
		}
		
		bool isEmpty(){
			if(top == NULL){
				return true;
			}
			else{
				return false;
			}
		}
};

int main(){
	
	Stack st;
	st.push(2);
	st.push(3);
	st.push(5);
	
	cout << st.peek() << endl;
	
	cout << st.pop() << endl;
	cout << st.pop() << endl;
	
	cout << st.peek() << endl;
	
	if(st.isEmpty()){
		cout << "Stack is empty" << endl;
	}
	else{
		cout << "Stack is not empty" << endl;
	}
}