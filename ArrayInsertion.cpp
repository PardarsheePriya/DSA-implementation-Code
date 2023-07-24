#include <iostream>
using namespace std;

int main(){
    
    int arr[20] = {3, 5, 1, 94, 32, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "The original array is: ";
    for(int i = 0; i < n ; i++){
        
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Insertion in array
    
    int x;
    int pos;
    cout << "Enter position you want to insert an element: ";
    cin >> pos;
    cout << endl;
    cout << "Enter the element: ";
    cin >> x;
    for(int i = n; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos - 1] = x;
    
    cout << "Array updated!";
    
    cout << "The new array is: ";
    for(int i = 0; i < n; i++){
        
        cout << arr[i] << " ";
    }
    cout << endl;
    
   
    
    
}