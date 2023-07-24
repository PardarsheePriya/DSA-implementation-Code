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
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int k = 0;
    
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            count0++;
        }
        if(arr[i] == 1){
            count1++;
        }
        if(arr[i] == 2){
            count2++;
        }
    }
    
    while(count0 > 0){
        arr[k] = 0;
        k++;
        count0--;
    }
    while(count1 > 0){
        arr[k] = 1;
        k++;
        count1--;
    }
    while(count2 > 0){
        arr[k] = 2;
        k++;
        count2--;
    }
    
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
    
   
    
    
}