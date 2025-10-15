#include<iostream>
using namespace std ;
class Rectangle {
	private:
		int length ;
		int width ;
	public:
		//Default constructor 
		Rectangle() {
			length = 0 ;
			width = 0 ;
			cout<<"Default constructor called."<<endl ;
		}
		//Parameterized constructor with one argument
		Rectangle(int l) {
			length = l ;
			width = l ;
			cout<<"Constructor with one parameter called."<<endl ;
		}
		//Parameterized constructor with two argument
		Rectangle(int l,int w) {
			length = l ;
			width = w ;
			cout<<"Constructor with two parameters called."<<endl ;
		}
		void displayArea() {
			cout<<"Area = " << (length * width)<<endl ;
		}
};
int main() {
	Rectangle r1 ; //Calls default constructor 
	Rectangle r2(5) ; // Calls constructor with one parameter
	Rectangle r3(4,6) ;
	r1.displayArea() ;
	r2.displayArea() ;
	r3.displayArea() ;
	return 0 ;
}

