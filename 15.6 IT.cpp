#include <iostream>//preprocessor directives
using namespace std;//standard library
class Parent{//parent class
	private://Access specifier
	//local declarations
		int a;
		protected://Access specifier
	//local declarations
			int b;
			public://Access specifier
				//local declarations
				int c;
};
class Child: public Parent{//Child class
	public://Access specifier
	//member functions
		void in(){//for input
			cout<<"Enter value of b and c.";
			cin>>b>>c;
		}
		void out(){//for output
			cout<<"Value of b: "<<b<<endl;
			cout<<"Value of c: "<<c<<endl;
		}
};
int main(){//function where execution starts
	Child o;//object creation and memory allocation
	//calling member functions
	o.in();
	o.out();
	return 0;//function where control returns
}