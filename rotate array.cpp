#include <iostream>
using namespace std;

void rotate(int arr[], int size){
	
	int temp = arr[size - 1];
	for(int i = size -1; i >= 0; i--){
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
}

int main(){
	int arr[100];
	int size;
	cout << "Enter the size: ";
	cin >> size;
	cout << endl;
	
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
	
	rotate(arr, size);
	
	
	cout << "\n Rotated array: ";
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
}