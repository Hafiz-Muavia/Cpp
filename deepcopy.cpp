#include <iostream>//preprocessor directive
using namespace std;//standard library
class deep{//class
	private://access specifier
		int *x,a;//data members
	public://access specifier
		deep(){//constructor
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
			cout<<"X is: "<<*x<<endl;
		}
		deep(const deep &p){//copy constructor
            x=new int;//new memory allocation in heap
			*x=*(p.x);//giving value instead of address hence deep copy
		}
};
int main(){//function where execution starts
	deep o;//object creationn and memory allopcation
	deep p(o);//copying object
	//output before change
	o.out();
	p.out();
	p.in();//manipulation
	//output after change
	o.out();
	p.out();
	return 0;//function where control returns
}