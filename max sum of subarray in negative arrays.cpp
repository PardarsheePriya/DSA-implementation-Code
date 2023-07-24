#include <iostream>
using namespace std;

int max_sum(int arr[], int size){
	
	int sum = arr[0];
	int maxi = arr[0];
	
	for(int i= 1; i < size; i++){
		sum = max(arr[i], arr[i] + sum);
		maxi = max(maxi, sum);
	}
	
	return maxi;
}

int main(){
	int arr[100];
	int size;
	cin >> size;
	cout << endl;
	
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
	
	int max_sum_of_subarray = max_sum(arr, size);
	
	cout << "Maximum sum of subarray is: " << max_sum_of_subarray << endl;
}