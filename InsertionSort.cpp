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
    
    //Insertion Sort
    int i, j, temp;          //i and j pointers, temp for storing element
    for(i = 1; i < vecSize; i++){
        temp = v.at(i);
        j = i - 1;
        while(j >= 0 && temp <= v.at(j)){			//Move the elements greater than temp to one position ahead from their current position
            v.at(j+1) = v.at(j);
            j = j-1;
        }
        v.at(j+1) = temp;
    }
  
    
    //display Sorted list
    cout << "\nSorted List: ";
    for(int i = 0; i < vecSize; i++){
        cout << v.at(i) << " ";
    }
   
   return 0; 
}