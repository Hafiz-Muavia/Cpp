#include <iostream>//preprocessor directive
using namespace std;//standard library
class shallow{//class
	private://access specifier
		int *x, a;//data members
	public://access specifier
		shallow(){//constructor
			x=&a;//address given to pointer
			cout<<"Enter x: ";//taking input
			cin>>*x;
		}
		//member functions
		void in(){//for input
			cout<<"Enter x: ";
			cin>>*x;
		}
		void out(){//for output
			cout<<"x is: "<<*x<<endl;
		}
		shallow(const shallow &p){//copy constructor
			x=p.x;//giving address so shallow copy
		}
};
int main(){//function where execution starts
	shallow o;//object creationn and memory allopcation
	shallow p(o);//copying object
	//output before change
	o.out();
	p.out();
	p.in();//manipulation
	//output after change
	o.out();
	p.out();
	return 0;//function where control returns
}
