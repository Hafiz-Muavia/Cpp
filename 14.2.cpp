#include <iostream> //preprocessor directive
using namespace std;//standard library
class Count{//class definition
	private://access specifier
		int n;//data member
	public://access specifier
		Count(){//constructor
			n=0;//initialization
		}
		void show(){//member function to show
			cout<<"n="<<n<<endl;
		}
		Count operator ++(){//operator overload
			Count temp;//temporary object created
			++n;//prefix overload
			temp.n=n;//assigning calling object's value to temporary object
			return temp;//returning temporary object
		}
};//class ends
int main(){//function where execution starts
	Count mv, ab;//object creation and memory allocation
	//calling member function before overloading
	mv.show();
	ab.show();
	ab=++mv;//overloading the operator and assigning to other object
    //calling member function after overloading
	mv.show();
	ab.show();
	return 0;//control returns
}