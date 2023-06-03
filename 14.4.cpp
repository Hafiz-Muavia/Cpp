#include <iostream> //preprocessor directive
using namespace std;//standard library
class Add{//class definition
	private://access specifier
		int a,b;//data members
	public://access specifier
		Add(){//constructor
			a=b=0;//initialization
		}
		void in(){//member function to input values
		    cout<<"Enter a: ";
		    cin>>a;
		    cout<<"Enter b: ";
		    cin>>b;
		}
		void show(){//member function to show
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		Add operator +(Add p){//operator overload
			Add temp;//temporary object created
			/*adding calling object and passing object's members and assigning them to temporary object*/
			temp.a=a+p.a;
			temp.b=b+p.b;
			return temp;//returning temporary object
		}
};//class ends
int main(){//function where execution starts
	Add mv, ba, ab;//object creation and memory allocation
	//calling member function for input
	mv.in();
	ab.in();
	//calling member function before overloading
	mv.show();
	ab.show();
	ba.show();
	ba=ab+mv;//overloading the operator and adding two objects and then assigning to 3rd object
    //calling member function after overloading
	mv.show();
	ab.show();
	ba.show();
	return 0;//control returns
}