#include <iostream>//preprocessor directive
using namespace std;//standard library
 class Mammals{//parent class named mammals
 	public://access specifier
 		void fun(){//member function
 			cout<<"I am mammal."<<endl;
		 }
 };//class ends
 class MarineAnimals{//parent class named marine animals
 	public://access specifier
 	void fun(){//member function
 			cout<<"I am marine animal."<<endl;
		 }
 };//class ends
 class BlueWhale:public Mammals,public MarineAnimals{//child class
 	public://access specifier
 	void fun(){//member function
 			cout<<"I belong to both the categories: Mammals as well as Marine Animals."<<endl;
		 }
 };//class ends
 int main(){//function where execution starts
 //objects creation and memory allocations
 	Mammals a;
 	MarineAnimals b;
 	BlueWhale c;
 	//function calling of own classes
 	a.fun();
 	b.fun();
 	c.fun();
 	//calling overriding functions from parent classes 
 	c.Mammals::fun();
 	c.MarineAnimals::fun();
 	return 0;//control returns
 }//function ends