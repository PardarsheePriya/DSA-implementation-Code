#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
int arr[100];
int size;
cout << "Enter the size of array: ";
cin >> size;
for(int i = 0; i < size; i++){
	cin >> arr[i];
}

cout << endl;
cout << "The list is: ";
for(int i = 0; i < size; i++){
	cout << arr[i] << " ";
}
cout << endl;

int sum = 0;
int maxi = arr[0];
for(int i = 0; i < size; i++){
	
	sum = sum + arr[i];
	maxi = max(maxi, sum);
	if(sum < 0){
		sum = 0;
	}}
	cout << maxi;
	
	

return 0;

}
