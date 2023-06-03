#include <iostream> //preprocessor directive
using namespace std;//standard library
class Read{//class definition
	private://access specifier
		int a,b;//data members
	public://access specifier
		Read(){//constructor
			a=b=0;//initialization
		}
		void in(){//member function to input values
		    cout<<"Enter days: ";
		    cin>>a;
		    cout<<"Enter pages: ";
		    cin>>b;
		}
		void show(){//member function to show
			cout<<"You have read "<<b<<" pages in "<<a<<" days."<<endl;
		}
		void operator +=(Read p){//operator overload
			/*adding calling object and passing object's members and assigning them to calling object*/
			a=a+p.a;
			b=b+p.b;
		}
};//class ends
int main(){//function where execution starts
	Read mv, ab;//object creation and memory allocation
	//calling member function for input
	mv.in();
	ab.in();
	//calling member function to show
	mv.show();
	ab.show();
	mv+=ab;//overloading the operator and adding two objects and then assigning to first object
    //calling member function after overloading
	mv.show();
	ab.show();
	return 0;//control returns
}