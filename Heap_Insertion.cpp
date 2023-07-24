#include <iostream>
using namespace std;

class Heap{
	public:
		int arr[100];
		int size;
		
		Heap(){
			arr[0] = 0;
			size = 0;
		}
		
		void insert(int val){
			size = size+1;
			int index = size;
			arr[index] = val;
			while(index > 1){
				int parent = index/2;
				
				if(arr[index] > arr[parent]){
					swap(arr[index], arr[parent]);
					index = parent;
				}
				else{
					return;
				}
			}
		}
		
		void print(){
			for(int i = 1; i <= size; i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}
};

int main(){
	
	Heap h;
	h.insert(10);
	h.insert(20);
	h.insert(30);
	h.insert(32);
	h.insert(11);
	h.insert(9);
	h.insert(89);
	h.print();
	
	return 0;
}