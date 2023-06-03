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
		void operator ++(int){//operator overload
			n++;//postfix overload
		}
};//class ends
int main(){//function where execution starts
	Count mv;//object creation and memory allocation
	mv.show();//calling member function before overloading
	mv++;//overloading the operator
	mv.show();//calling member function before overloading
	return 0;//control returns
}