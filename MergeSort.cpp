#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left +1;
    int n2 = right - mid;
    
    int a[n1];
    int b [n2];
    
    for(int i = 0; i < n1; i++){
        a[i] = arr[left+i];
    }
    
    for(int i = 0; i < n2; i++){
        b[i] = arr[mid + 1 + i];
    }
    
    int i = 0;
    int j = 0;
    int k = left;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;
        }
        else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = a[i];
        k++, i++;
    }
    while(j < n2){
        arr[k] = b[j];
        k++, j++;
    }
}

void merSort(int arr[], int left, int right){
    if(left < right){
        int mid = (left + right) /2;
        merSort(arr, left, mid);
        merSort(arr, mid+1, right);
        
        merge(arr, left, mid, right);
    }
}

int main(){
    int arr[100];
    int sizeOfarr;
    cout << "Enter the size of list: ";
    cin >> sizeOfarr;
    
    for(int i= 0; i < sizeOfarr; i++){
        cin >> arr[i];
    }
    
    cout << "Unsorted list:" << endl;
    
    
    merSort(arr, 0, sizeOfarr - 1);
    cout << endl;
    cout << "Sorted List: " << endl;
    for(int i = 0; i < sizeOfarr; i++){
        cout << arr[i] << " ";
    }
    
    
}