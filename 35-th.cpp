#include <iostream>
using namespace std;

class Dollar;
class Ruble {
	private:
		int ruble;
		int kopeek;
	public:
		Ruble(int r, int k)
			:ruble(r), kopeek(k) {}
		void balance() {
			cout << ruble << "," << endl;
		}
		Dollar convert();
};


class Dollar {
private:
	int dolar;
	int cent;
public: 
	Dollar(int d, int c)
		:dolar(d), cent(c) {}
	void balance() {
		cout << dolar << "," << cent << endl;
	}
	Ruble convert();
	
};


Dollar Ruble::convert(){
	return Dollar(ruble/60, kopeek/60);
}
Ruble Dollar::convert(){
	return Ruble(dolar*60 , cent*60);
}


int main() {
	Ruble myWage(5000, 30);
	Dollar myWage_d(0,0);
	myWage_d = myWage.convert();
	myWage_d.balance();
}

