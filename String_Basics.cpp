#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
	
	char first_name[20];
	char last_name[20];
	char full_name[50];
	
	cout << "Enter you first name: ";
	cin >> first_name;
	
	cout << endl;
	
	cout << "Enter your last name: ";
	cin >> last_name;
	
	cout << endl;
	
	cout << "Hello, " << first_name << " has " << strlen(first_name) << "characters" << endl;
	cout << "And, " << last_name << " has " << strlen(last_name) << "charcters" << endl;
	
	//Functions
	
	strcpy(full_name, first_name);
	strcat(full_name, " ");
	
	strcat(full_name, last_name);
	
	cout << "The full name is: " << full_name << endl;
	return 0;
}

