#include <iostream>//preprocessor directives
#include <cmath>//library for math operations
using namespace std;//Standard Library
class Rectangle//Parent Class
{
	private://access specifier
	//Local Declarations
		int length;
		int breadth;
	public://access specifier
	
		Rectangle(){//Default constructor
			cout<<"Default constructor."<<endl;
		}//Constructor end
		Rectangle(int a,int b){//Parameterized Constructor
		//Initialization
			length=a;
			breadth=b;
		}//Parameterized Constructor end
		//Member functions
		~Rectangle(){//Destructor
		cout<<"Destructor of parent class."<<endl;
		}//Destructor ends
		void area(){//for area of rectangle
			int area;
			area=length*breadth;
			cout<<"Area of Rectangle is: "<<area<<endl;
		}
		void parameter(){//for parameter of rectangle
			int parameter;
			parameter=2*(length+breadth);
			cout<<"Parameter of Rectangle is: "<<parameter<<endl;
		}
};//class end
class Squaree:public Rectangle //Child Class
{
	private://access specifier
	//Local Declarations
		int side;
	public://access specifier
		Squaree(int s,int a, int b): Rectangle(a,b){//Parameterized constructor
			side=s;
			}
			~Squaree(){//Destructor 
				cout<<"Destructor of child class."<<endl;
			}
			//Member functions
		void area(){//area for square
			int area=pow(side,2);
			cout<<"Area of Square is: "<<area<<endl;
		}
		void parameter(){//Parameter for square
			int parameter;
			parameter=4*side;
			cout<<"Parameter of Square is: "<<parameter<<endl;
		}
};//Child class ends
int main(){//Function where execution starts
	Squaree mv(5,4,6);//Object creation and memory allocation
	//Calling member functions of parent class
	mv.Rectangle::area();
	mv.Rectangle::parameter();
	//calling member functions for child class
	mv.area();
	mv.parameter();
}//Destructor calls