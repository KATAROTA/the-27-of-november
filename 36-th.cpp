#include <iostream>
using namespace std;

class Data {
	private:
		int day;
		int month;
		int year;
	public:
		Data(int d, int m, int y) try{
			if (d<1 or d>30) throw 1;
			if (m<1 or m>12) throw 2;
			if (y<0 or y>4000) throw 3;
			day =d;
			month =m;
			year =y;
		}
			catch (int error) {
			if (error ==1) cout << "incorrect day" << endl;
			if (error ==2) cout << "incorrect month" << endl;
			if (error ==3) cout << "incorrect year" << endl;
		}
			
			
		void ShowDate() {
			cout << "Data: " << day << "." << month << "." << year << endl;
		}
		Data operator++(){
			++day;
			return *this;
		}
		Data operator++(int){
			Data copy(day, month, year);
			++day;
			return copy;
		}
		
		int Add2DateDay(int d) {
			int l_day = day+d;
			int l_month = month + l_day / 30;
			month = l_month %12;
			year = year+ l_month/12;
			day = l_day % 30;
			return 0;
		}
		
	
};



int main() {
	
	try{
		Data day1(3, 14, 22);
		day1.ShowDate();
	
	}
	catch (...) {
		cout << "object not created" << endl;
	}
	
	
		
	
	
}
