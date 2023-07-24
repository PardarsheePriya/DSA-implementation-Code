#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    //vector declaration
    vector <int> v;
    
    //size of vector
    int vecSize;
    cout << "Enter the size of vector: ";
    cin >> vecSize;
    cout << endl;
    
    //vector input from user
    int x;
    for(int i = 0; i < vecSize; i++){
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end()); //sorting vector
    
    //print sorted vector
    cout << "Sorted Vector" << endl;
    for(int i = 0; i < vecSize; i++){
        cout << v.at(i) << " ";
    }
    
    cout << endl;
    
        //value to be search
    int beg, mid, end;
    beg = 0;
    end = vecSize - 1;
    
    
    
    int value;
    cout << "Enter the value you want to search in list: ";
    cin >> value;

    //binary search
    
    while(beg <= end){
        mid = (beg + end) / 2;
        if(v.at(mid) == value){
            cout << "Element is found at position: " << mid + 1;
            exit(0);
        }
        else if(value > v.at(mid)){
            beg = mid + 1;
        }
        else if(value < v.at(mid)){
            end = mid - 1;
        }
    }
    
    cout << "Number is not found!" << endl;
    
    
 return 0;
}
