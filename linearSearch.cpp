
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void linear_search(){
    
}

int main()
{
    vector <int> v;
    int vecSize;
    cout << "Enter the size of vector: ";
    cin >> vecSize;
    cout << endl;
    
    for(int i = 0; i < vecSize; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    int num;
    cout << "\n Enter the number you want to search in list: ";
    cin >> num;
    cout << endl;
    int i;
    for( i = 0; i < vecSize; i++ ){
        if(v[i] == num ){
            cout << "Element found at " << (i+1) << " position";
            break;
        }
    }
    if(i==vecSize){
    	cout<<" not found ";
	}


    return 0;
}
