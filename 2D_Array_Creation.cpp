#include <iostream>
using namespace std;

int main(){
	
	//2d Array
	int arr[4][5];
	
	//input
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			cin >> arr[i][j];
		}
	}
	
	//print
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}