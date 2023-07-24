#include <iostream>
using namespace std;

int gcd(int a, int b){
	
	if(a == 0){
		return b;
	}
	
	if(b == 0){
		return a;
	}
	
	while(a != b){
		
		if(a < b){
			b = b-a;
		}
		else{
			a = a-b;
		}
	}
	
	return a;
}

int main(){
	
	cout << "Enter two numbers to find greatest common factor: " << endl;
	int a, b;
	cin >> a >> b;
	cout << endl;
	
	int ans = gcd(a, b);
	cout << "The greatest common factor of " << a << " and " << b << " is: " << ans << endl;
	
	return 0;
}