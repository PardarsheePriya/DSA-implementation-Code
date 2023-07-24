#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s1 = "Apple";
	string s2 = "Banana";
	
	cout << s1 << " and " << s2 << " are fruits" << endl;
	
	if(s1 == s2){
		cout << "They are equal" << endl;
	}
	else{
		cout << "They are not equal" << endl;
	}
	
	//functions
	cout <<	s1.substr(0, 4) << endl;
	cout << s2.substr(2,3) << endl;
	
	cout << "Index of l in apple is: " << s1.find("l") << endl;
	
	cout << "Length of " << s1 << " is " << s1.length() << endl;
	cout << "Length of " << s2 << " is " << s2.length() << endl;
	
	string name;
	getline(cin, name);
	cout << "The name is " <<  name << endl;
	
	string fr1 = "Water";
	string fr2 = "Melon";
	
	cout << fr1+fr2 << endl;
	
	return 0;
}