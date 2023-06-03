#include <iostream> //preprocessor directive
#include <cstring>
using namespace std;//standard library
class Length{//class definition
	private://access specifier
		char a[50];//data member
	public://access specifier
		Length(){//constructor
			a[0]='\0';//initialization
		}
		void in(){//member function to input values
		    cout<<"Enter a: ";
		    gets(a);
		}
		void show(){//member function to show
			cout<<"a="<<a<<endl;
		}
		int operator ==(Length p){//operator overload
			if(strlen(a)==strlen(p.a))//comparing both lengths
			return 1;//for true condition
			else return 0;//for false condition
		}
};//class ends
int main(){//function where execution starts
	Length mv, ba;//object creation and memory allocation
	//calling member function for input
	mv.in();
	ba.in();
	//calling member function for output
	mv.show();
	ba.show();
	if(mv==ba)//overloading the operator and comparing two objects' length 
	cout<<"Same length."<<endl;//for true condition
	else cout<<"Different length."<<endl;// for false condition
	return 0;//control returns
}