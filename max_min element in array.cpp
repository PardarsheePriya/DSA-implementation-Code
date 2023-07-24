
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
    
    cout << endl;
    
    int maximum = arr[0];
    int minimum = arr[0];
    
    for(int i = 0; i < size; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    
    cout << "Maximum element in array is: " << maximum << endl;
    cout << "Minimum element in array is: " << minimum << endl;
    
}