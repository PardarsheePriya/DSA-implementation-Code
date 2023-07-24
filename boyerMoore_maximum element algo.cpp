#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int boyerMoore(int arr[], int size){
    int count;
    int candidate = arr[0];
    
    for(int i = 0; i < size; i++){

        if(arr[i] == candidate){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            candidate = arr[i];
        }
    }
    
    return candidate;
}

void check(int arr[], int size, int num){
    int count;
    for(int i = 0; i < size; i++){
        if(num == arr[i]){
            count++;
        }
    }
    if(count >= size/2){
        cout <<"\n" << num << " is the maximum element in array";
    }
    else{
        cout << "\nArray doesn't have any element maximum element";
    }
}
int main(){
    int arr[100];
    int size; 
    cout << "Enter the size: ";
    cin >> size;
    cout << endl;
    
    //input array
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    //display array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    int maximum_num = boyerMoore(arr, size);
    check(arr, size, maximum_num);
    
    
}