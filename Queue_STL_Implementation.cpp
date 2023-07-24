#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	//create queue
	queue<int> q;
	
	//operations on queue
	
	q.push(10);
	q.push(28);
	q.push(3);
	
	cout << q.front() << endl;
	cout << q.size() << endl;
	
	q.pop();
	cout << q.front() << endl;
	cout << q.size() << endl;
	
	if(q.empty()){
		cout << "Queue is empty" << endl;
	}
	else{
		cout << "Queue is not empty" << endl;
	}
	
	return 0;	
}