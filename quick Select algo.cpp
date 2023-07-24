#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int size){
    
    int l = 0;
    int r = size -1;
    while(l < r){
        if(arr[l+1] <= arr[l]){
            swap(arr[l+1], arr[l]);
            l++;
        }
        else if(arr[r] >arr[l]){
            r--;
        }
        else{
            swap(arr[r], arr[l+1]);
        }
    }
    
    return l;
}

int quickSelect(int arr[], int size, int k){
    
    int p = partition(arr, size);
    if(k == p){
        return arr[p - 1];
    }
    else if(k < p){
        return quickSelect(arr, p, k);
    }
    else{
        return quickSelect(arr + p+1, size-(p+1), k - (p+1));
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
    
    int k;
    cout << "\nEnter the k: ";
    cin >> k;
    cout << quickSelect(arr, size, k);
}