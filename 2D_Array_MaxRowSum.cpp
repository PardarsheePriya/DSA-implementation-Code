#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	//Array
	int arr[3][3];
	//taking input
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> arr[i][j];
		}
	}
	
	cout << "Array is: " << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
	
	//Row Sum
	int maxi = 0;
	cout << "Row sum of Array is: " << endl;
	for(int i = 0; i < 3; i++){
		int sum = 0;
		for(int j = 0; j < 3; j++){
			sum += arr[i][j];
		}
		cout << sum << endl;
		maxi = max(maxi, sum);
	}
	
	cout << "Maximum row sum is: " << maxi << endl;
	return 0;
}