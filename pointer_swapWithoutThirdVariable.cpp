#include <iostream>

using namespace std;

void swapfunc(int *x, int *y){
    
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    
}

int main(){
    int a = 10;
    int b = 20;
    
    cout << "Before swap, a = " << a << " b = " << b << endl;
    swapfunc(&a, &b);
    cout << "After swap, a = " << a << " b = " << b << endl;
    
  return 0;  
}