#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int n;
	cout << "Enter a number to change in its binary form: ";
	cin >> n;
	cout << endl;
	
	int ans = 0;
	int i = 0;
	while(n!=0){
		
		int bit = n & 1;
		ans = bit * pow(10, i) + ans;
		n = n >> 1;
		i++;
	}
	
	cout << "Binary Number is: " << ans << endl;
	return 0;
}