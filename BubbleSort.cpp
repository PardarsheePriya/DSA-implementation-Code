#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    int a[100];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    cout << endl;
    cout << "The list is: ";
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    //Bubble Sort
    for(int i = 0; i < size; i++){
        for(int j = 1; j < size; j++){
            if(a[j] < a[j-1]){
                swap(a[j], a[j-1]);
            }
        }
    }
    //Display Sorted array
    cout << "The Sorted list is: ";
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
