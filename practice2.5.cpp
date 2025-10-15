#include<iostream>
using namespace std ;
class Student {
	private:
		string name ;
		int roll ;
	public:
		//Parameterized constructor 
		Student(string n,int r) {
			name = n ;
			roll = r ;
			cout<<"Parameterized constructor called."<<endl ; 
		}
		//Copy constructor 
		Student(const Student &s) {
			name = s.name ;
			roll = s.roll ;
			cout<<"Copy constructor called."<<endl ;
		}
		void display() {
			cout<<"Name: "<<name<<", Roll: "<<roll<<endl ;
		}
};
int main() {
	Student s1("Sanjay",57) ; //Calls parameterized constructor 
	Student s2 = s1 ; //Calls copy constructor 
	s1.display() ;
	s2.display() ;
	return 0 ;
}
