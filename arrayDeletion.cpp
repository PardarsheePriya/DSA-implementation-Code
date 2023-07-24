#include <iostream>
using namespace std;

int main(){
    
    int arr[6] = {3, 5, 1, 94, 32, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "The original array is: ";
    for(int i = 0; i < n ; i++){
        
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //Deletion in array
    int delpos;
    cout << "Enter position you want to insert an element: ";
    cin >> delpos;
    cout << endl;
    for(int i = delpos; i <= n; i++){
        arr[i - 1] = arr[i];
    }
    
    cout << "Array updated!";
    
    cout << "The new array is: ";
    for(int i = 0; i < n-1; i++){
        
        cout << arr[i] << " ";
    }
    cout << endl;
    
}