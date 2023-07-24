#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	deque<int>d;
	
	//Operations
	
	d.push_front(10);
	d.push_front(20);
	d.push_back(2);
	d.push_back(3);
	
	cout << d.front() << endl;
	cout << d.back() << endl;
	
	d.pop_back();
	d.pop_front();
	
	cout << d.front()<< endl;
	cout <<d.back()<< endl;
	
	if(d.empty()){
		cout << "Queue is empty" << endl;
		
	}
	else{
		cout << "Queue is not empty" << endl;
	}
	
	return 0;
}