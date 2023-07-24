
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
    
    //Sorting array
    
     for(int i = 0; i < size; i++){
        for(int j = 1; j < size; j++){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }
    
    int kthmax;
    int kthmin;
    cout << "Enter the kth max element to find: ";
    cin >> kthmax;
    cout << endl;
    cout << "Maximum kth element is: " << arr[size - kthmax] << endl;
    cout << "Enter the kth min element to find: ";
    cin >> kthmin;
    cout << endl;
    cout << "Minimum kth element is: " << arr[0+kthmin - 1] << endl;
    
    
}