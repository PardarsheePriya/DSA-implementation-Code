
#include <iostream>
using namespace std;

int Sum(int n){
    if(n == 0){
        return 0;
    }
    
    int prevSum = Sum(n-1);
    
    return n + prevSum;
    
}

int powerNum(int n, int p){
    if(p == 0){
        return 1;
    }
    
    int prevPow = powerNum(n, p-1);
    
    return n*prevPow;
}

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    
    int prevFactorial = factorial(n-1);
    return n*prevFactorial;
}

int main()
{
    int n, p;
    
    // Sum of n numbers
    cout << "Addition of N numbers using recursion" << endl << endl;
    cout << "Enter a number you want add upto: ";
    cin >> n;
    cout << endl;
    
    int sum = Sum(n);
    cout << sum << endl;
    
    //N to the power P
    cout << "\n\nN to the power P using recursion" << endl << endl;
    cout << "Enter the exponent p: ";
    cin >> p;
    cout << endl;
    
    int power = powerNum(n, p);
    cout << power << endl;
    
    
    //Factorial of n
    cout << "\n\nFactorial of N" << endl << endl;
    int fact = factorial(n);
    cout << fact;
    
    //Fibonacci Series
    cout << "\n\nFibonacci of Nth number" << endl << endl;
    cout << fibonacci(n);
    return 0;
}
