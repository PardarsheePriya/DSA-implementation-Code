#include <iostream>
using namespace std;

class Stack{
	
	public:
		//data members
		int *arr;
		int top;
		int size;
		
		//Constructor or behaviour
		Stack(int size){
			this->size = size;
			arr = new int[size];
			top = -1;
		}
		
		//member functions
		
		void push(int element){
			if(size-top > 1){
				top++;
				arr[top] = element;
			}
			else{
				cout << "Stack Overflow" << endl;
			}
		}
		
		void pop(){
			if(top >= 0){
				top--;
			}
			else{
				cout << "Stack Underflow" << endl;
			}
		}
		
		int peek(){
			if(top >= 0){
				return arr[top];
			}
			else{
				cout << "Stack is empty" << endl;
			}
			return -1;
		}
		
		bool isEmpty(){
			if(top >= 0){
				return false;
			}
			else{
				return true;
			}
		}
				
};

int main(){
	
	Stack st(5);
	st.push(23);
	st.push(34);
	st.push(8);
	st.push(87);
	cout << st.peek() << endl;
	
	st.pop();
	st.pop();
	cout << st.peek() << endl;
	
	if(st.isEmpty()){
		cout << "Stack is empty" << endl;
	}
	else{
		cout << "Stack is not empty" << endl;
	}
	
	return 0;
}