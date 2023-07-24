#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    //defining vector
    
    vector <int> v;
    int vecSize;
    cout << "Enter the size of the list: ";
    cin >> vecSize;
    
    //input elements of list
    int num;
    for(int i = 0; i < vecSize; i++){
        cin >> num;
        v.push_back(num);
    }
    
    //display unsorted list
    cout << "\nUnsorted List: ";
    for(int i = 0; i < vecSize; i++){
        cout << v.at(i) << " ";
    }
    
    //Selection Sort
    int temp;
    for(int i = 0; i< vecSize - 1; i++){
        for(int j = i+1; j<vecSize; j++){
            if(v.at(j) < v.at(i)){
               temp = v.at(i);
               v.at(i) = v.at(j);
               v.at(j) = temp;
            }
        }
    }
   
    
  
    
    //display Sorted list
    cout << "\nSorted List: ";
    for(int i = 0; i < vecSize; i++){
        cout << v.at(i) << " ";
    }
   
   return 0; 
}