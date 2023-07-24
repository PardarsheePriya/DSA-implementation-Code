#include <iostream>

using namespace std;

int main(){
    
    int i, j;
    char star = '*';
    int length;
    cout << "Enter the length of side of triangle";
    cin >> length;
    cout << endl;
    
    for(i = 1; i <= length; i++){
        for(j = length; j >= i; j--){
            cout << "  ";
        }
        for(int k=0; k<i; k++){
        	if(k == 0 || k == i-1 || i == 1 || i == length){
        		cout << " * ";
			}
			else{
				cout << "   ";
			}
        	   
		}
        
        cout << endl;
    }
return 0;  
}