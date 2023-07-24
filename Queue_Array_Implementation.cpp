#include <iostream>
using namespace std;

class Queue{
	
	//Class members
	
	int* arr;
	int size;
	int qfront;
	int rear;
	
	//Constructor
	
	public:
		Queue(){
			size = 100001;
			arr = new int[size];
			qfront = 0;
			rear = 0;
		}
		
		//member functions
		
		void enqueue(int data){
			
			if(rear == size){
				cout << "Queue is full" << endl;
			}
			else{
				arr[rear] = data;
				rear++;
			}
		}
		
		int dequeue(){
			
			
			int ans = arr[qfront];
			if(rear == qfront){
				return -1;
			}
			else{
				arr[qfront] = -1;
				qfront++;
				if(qfront == rear){
					qfront = 0;
					rear = 0;
				}
			}
			
			return ans;
		}
		
		int front(){
			
			if(qfront == rear){
				return -1;
			}
			else{
				
				return arr[qfront];
			}
		}
		
		bool isEmpty(){
			
			if(rear == qfront){
				return true;
			}
			else{
				return false;
			}
		}
	
	
};


int main(){
	
	Queue q;
	q.enqueue(5);
	q.enqueue(9);
	q.enqueue(3);
	cout << q.front() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	
	if(q.isEmpty()){
		cout << "Queue is empty" << endl;
	}
	else{
		cout << "Queue is not empty" << endl;
	}
	
	return 0;
}