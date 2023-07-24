#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    
    int arr[] = {4, 5, 6, -1, -8, 3, 2};
    int size = sizeof(arr)/arr[0];
    
    int sum = 0;
    int maxi = arr[0];
    for(int i = 0; i< size; i++){
        
        sum = sum+arr[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    
    cout << "Maximum sum of subarrays is: " << maxi << endl;
}