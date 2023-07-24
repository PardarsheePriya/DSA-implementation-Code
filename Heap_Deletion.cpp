#include <iostream>
using namespace std;

class Heap{
	
	public:
		int arr[100];
		int size;
		
		Heap(){
			size = 0;
			arr[0] = 0;
		}
		
		//member functions
		
		void insert(int val){
			
			size = size+1;
			int index = size;
			arr[index] = val;
			while(index > 1){
				
				int parent = index/2;
				if(arr[parent] < arr[index]){
					swap(arr[parent], arr[index]);
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
		
		void deletion(){
			
			if(size == 0){
				cout << "Nothing to Delete" << endl;
			}
			
			//last element into first index
			arr[1] == arr[size];
			size--;		//remove last element
			
			//take root node to it's correct position
			int i = 1;
			
			while(i < size){
				int leftIndex = 2*i;
				int rightIndex = 2*i+1;
				
				if(leftIndex < size && arr[i] < arr[leftIndex]){
					swap(arr[i], arr[leftIndex]);
					i = leftIndex;
				}
				else if(rightIndex < size && arr[i] < arr[rightIndex]){
					swap(arr[i], arr[rightIndex]);
					i = rightIndex;
				}
				else{
					return;
				}
			}
		}
		
		
};

int main(){
	
	Heap h;
	h.insert(13);
	h.insert(23);
	h.insert(89);
	h.insert(73);
	h.insert(12);
	h.insert(46);
	h.insert(932);
	h.print();
	
	cout << "Deleting Node" << endl;
	h.deletion();
	h.print();
	
	return 0;
}