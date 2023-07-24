
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
    
    //aranging array
     vector <int> v;
        for(int i = 0; i < size; i++){
            if(arr[i] > 0){
                v.push_back(arr[i]);
            }
        }
        for(int i = 0; i <size; i++){
            if(arr[i] < 0){
                v.push_back(arr[i]);
            }
        }
        for(int i = 0; i < size; i++){
            arr[i] = v[i];
        }
    
//print array
    cout << endl;
    cout << "Array after arranging";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
   
    
    
}