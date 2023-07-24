#include <iostream>

using namespace std;

int main(){
    
    int i, j;
    int length;
    cout << "Enter the length of side of triangle";
    cin >> length;
    cout << endl;
    
    for(i = 1; i <= length; i++){
        for(j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
  return 0;  
}