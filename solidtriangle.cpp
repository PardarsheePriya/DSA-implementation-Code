#include <iostream>
using namespace std;

int main(){
	int length, counter;
	int i, j, n;
	
	
	cout << "Enter length of side of the triangle: ";
	cin >> length;
	cout << endl;
	counter = length;
	
	for(i = 1; i <= length; i++){
		for(n = counter; n>= 1; n--){
				cout << "  ";
				
			}
		for(j = 1; j <= i; j++){
			
			cout << " * ";
		}
		cout << endl;
	}
	
	return 0;
}