#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &arr, int n, int i){
	
	int largest = i;
	int left = 2*i;
	int right = 2*i+1;
	
	if(left < n && arr[left] > arr[largest]){
		swap(arr[left], arr[largest]);
		largest = left;
	}
	
	if(left < n && arr[right] > arr[largest]){
		swap(arr[right], arr[largest]);
		right = largest;
	}
	
	if(i != largest){
		swap(arr[i], arr[largest]);
		heapify(arr, largest, i);
	}
}

int main(){
	
	vector<int> arr = {-1, 54, 53, 55, 52, 51};
	int n = arr.size();
	
	cout << "Orginal Array: " << endl;
	for(int i = 1; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	for(int i = n/2; i > 0; i--){
		heapify(arr, n, i);
	}
	
	cout << "Array after Heapify" << endl;
	for(int i = 1; i < n; i++){
		cout << arr[i] << " ";
		
	}
	cout << endl;
	
	return 0;
}