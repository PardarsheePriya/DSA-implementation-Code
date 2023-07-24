#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int partition(int arr[], int lb, int ub){
    
    int pivot = arr[lb];
    int count = 0;
    for(int i = lb+1; i <= ub; i++){
        if(arr[i] < pivot){
            count++;
        }
    }
    
    // place pivot element at right position
    
    int pivotIndex = lb + count;
    swap(arr[pivotIndex], arr[lb]);
    
    //partition in left and right part of array
    int start = lb;
    int end = ub;
    
    
    while(start <pivotIndex && end > pivotIndex){
        
        while(arr[start] < pivot){
            start++;
        }
        while(arr[end] > pivot){
            end --;
        }
        
        if(start <pivotIndex && end > pivotIndex){
            swap(arr[start++], arr[end--]);
        }
    }
    
    
    return pivotIndex;
}

void quickSort(int arr[], int lb, int ub){
    if(lb < ub){
        int loc = partition(arr, lb, ub); //storing pivotIndex to sort the before and after part of array
        quickSort(arr, lb, loc-1);      //recursion on before part of array
        quickSort(arr, loc+1, ub);      //recursion on after part of array
    }
}

int main()
{
    int arr[100];
    int sizeOfarr;
    int lb = 0;
    int ub = sizeOfarr - 1;
    
    //input array from user
    cout << "Enter the size of list: ";
    cin >> sizeOfarr;
    cout << endl;
    for(int i = 0; i < sizeOfarr; i++){
        cin >> arr[i];
    }
    
    // display unsorted array
    cout << "\nUnsorted Array: ";
    for(int i = 0; i < sizeOfarr; i++){
        cout << arr[i] << " ";
    }
    
    //Sorting Array
    cout << endl;
    cout << "--Sorting List--";
    quickSort(arr, 0, sizeOfarr-1);
    
    //display sorted List
    cout << "\nSorted Array: ";
    for(int i = 0; i < sizeOfarr; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    
    

    return 0;
}
