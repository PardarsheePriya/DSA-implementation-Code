#include <iostream>
using namespace std;

class Hotel{
	
	private:
		//data members
		int gold;
		int silver;
		int bronze;
		int days;
		
		const int gPrice = 7500;
		const int sPrice = 5500;
		const int bPrice = 3500;
		
		const int laundryPrice = 500;
		const int food = 200;
		
		public:
			
			int getHotelPrice(){
				
				cout << "Enter the number of days: " << endl;
				cin >> days;
				cout << endl;
				
				
				//Gold booking
				cout << "Enter the	number of  Gold room: " << endl;
				cin >>gold;
				cout << endl;
				
				
				//Silver booking
				cout << "Enter the	number of  Silver room: " << endl;
				cin >>silver;
				cout << endl;
				
				
				//Bronze Booking
				cout << "Enter the	number of  Bronze room: " << endl;
				cin >>bronze;
				cout << endl;
				
				int basicPrice = (days) * ((gold*gPrice) + (silver*sPrice) + (bronze*bPrice));
				
				return basicPrice;
				
			}
			
			int services(){
				char c;
				cout << "Do you want to avail extra services: Y/N" << endl;
				cin >> c;
				cout << endl;
				
				int servicePrice = 0;
				if(c == 'Y'){
					
					char l;
					cout << "Laundry Services: Y/N" << endl;
					cin >> l;
					if(l == 'Y'){
						servicePrice += laundryPrice*days;
					}else{
						cout << "Alright!" << endl;
					}
					
					char f;
					cout << "Food Services: Y/N" << endl;
					cin >> f;
					if(f == 'Y'){
						
						cout << "Number of Persons:" << endl;
						int p;
						cin >> p;
						
						servicePrice += food*p*days;
					}else{
						cout << "Alright!" << endl;
					}
					
				}
				
				return servicePrice;
			}
		
};

int main(){
	Hotel user1;
	int basic = user1.getHotelPrice();
	int extra = user1.services();
	
	int total = basic + extra;
	int t = total + (total%18) + (total%4);
	cout << "Your total Booking Price: " << t << endl;
	return 0;
}