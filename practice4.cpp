#include<iostream>
using namespace std ;
void greet(string name,string message = "Hello") {
	cout<<message << ", " << name << "!"<<endl ;
}
int main() {
	greet("Alice") ; // uses default message : Hello
	greet("Bob" , "Good morning") ; // Uses provided message
	return 0 ;
}
