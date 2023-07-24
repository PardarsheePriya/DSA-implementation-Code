#include <iostream>
using namespace std;

void print_array(int arr[], int sizeOfarray){
    for(int i = 0; i < sizeOfarray; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Insertion at beginnning of Array
int insert_at_beg(int arr[], int sizeOfarray){

	cout << "Enter the number you want to insert at beginning of array: ";
	for(int i = sizeOfarray - 1; i >= 0; i--){
		arr[i+1] = arr[i];
	}
	cin >> arr[0];
	sizeOfarray++;
	
	
return sizeOfarray;
}

//Insertion at end of Array

int insert_at_end(int arr[], int sizeOfarray){
    
    int num;
    cout << "Enter the number you want to insert at end of array: ";
    cin >> num;
    arr[sizeOfarray] = num;
    
    sizeOfarray++;
    
    return sizeOfarray;
}

//insert at n-th position

int insert_at_n_position(int arr[], int sizeOfarray){
    
    int position;
    cout << "Enter the position you want to insert an element: ";
    cin >> position;
    cout << endl;
    for(int i = sizeOfarray-1; i >= position - 1; i--){
        arr[i+1] = arr[i];
    }
    int num;
    cout << "Enter the number you want to insert at " << position << " : ";
    cin >> num;
    arr[position - 1] = num;
    sizeOfarray++;
    
    return sizeOfarray;
}

int main(){
	
	//creating array
	
	int arr[100];
	int sizeOfarray;
	cout << "Enter the size of array: ";
	cin >> sizeOfarray;
	
	for(int i = 0; i < sizeOfarray; i++){
		cin >> arr[i];
	}
	
	cout << "\n\n----------Choose a number to perform these operation on array----------\n\n";
	cout << "1. Insert an element at beginning of array" << endl;
	cout << "2. Insert an element at end of array" << endl;
	cout << "3. Insert an element at n-th position of array" << endl;
	cout << "4. Delete an element at beginning of array" << endl;
	cout << "5. Delete an element at end of array" << endl;
	cout << "6. Delete an element at n-th position of array" << endl;
	cout << "7. Print array" << endl;
	
	int num;
	cin >> num;
	if(num == 1){
		int size = insert_at_beg(arr, sizeOfarray);
		
		print_array(arr, size);
	}
	else if(num == 2){
	    int size = insert_at_end(arr, sizeOfarray);
	    print_array(arr, size);
	}
	else if(num == 3){
	    int size = insert_at_n_position(arr, sizeOfarray);
	    print_array(arr, size);
	}
	
	
	return 0;
}