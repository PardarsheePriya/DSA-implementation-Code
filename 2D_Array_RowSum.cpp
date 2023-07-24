//Row Sum
#include <iostream>
using namespace std;

int main(){
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << "The array is: " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    cout << "The sum of each row is: " << endl;
    
    for(int i=0; i < 5; i++){
        int sum = 0;
        for(int  j = 0; j < 5; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
    
    return 0;
}