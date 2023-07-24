#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	//priority queue
	priority_queue<int>pq;
	
	//enqueue
	pq.push(49);
	pq.push(594);
	pq.push(32);
	pq.push(453);
	pq.push(123);
	pq.push(323);
	pq.push(540);
	
	while(!pq.empty()){
		
		int element = pq.top();
		pq.pop();
		cout << element << " ";
		
	}
	cout << endl;
	return 0;
}