#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    
    int arr[100];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << endl;
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    cout << "\nArray before: ";
    //print array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    cout << "\n Reversed array: ";
    for(int i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
}