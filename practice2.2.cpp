#include<iostream> 
using namespace std ;
class Rectangle {
	private :
		int length ;
		int width ;
	public :
		//constructor to initialize length and width 
		Rectangle(int l,int w) {
			length = l ;
			width = w ;
		}
		// declare friend function 
		friend int calculateArea(Rectangle r) ;
};
int calculateArea(Rectangle r) {
	//accessing private members of class rectangle
	return r.length * r.width ;
}
int main(){
	Rectangle rect(10,5) ; //create object with length 10 and width 5
	//call friend function
	int area = calculateArea(rect) ;
	cout<<"Area of Rectangle = " << area<<endl ;
	return 0 ;
}
