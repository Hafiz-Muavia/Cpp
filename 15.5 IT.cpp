#include <iostream>//preprocessor directives
using namespace std;//standard library
 class Simple{//parent class
 	protected://Access specifier
 	//Data members
 		int a,b;
 		public://Access specifier
 		//member functions
 			void in(){//for input
 				cout<<"Enter value of a: ";
 				cin>>a;
 				cout<<"Enter value of b: ";
 				cin>>b;
			 }
 			void add(){//for addition
 				int c=a+b;
 				cout<<"Addition is: "<<c<<endl;
			 } 
			 void sub(){//for subtraction
 				int c=a-b;
 				cout<<"Subtraction is: "<<c<<endl;
 			}
 			void mul(){//for multiplication
 				int c=a*b;
 				cout<<"Multiplication is: "<<c<<endl;
 			}
 			void div(){//for division
 				int c=a/b;
 				cout<<"Division is: "<<c<<endl;
 			}
 };
 class Complex:public Simple{//Child class
 	public://Access specifier
 	//member functions
 		void add(){//addition
 			if(a>0 && b>0)//condition
 			Simple::add();//calling function from parent class
 			else
 			cout<<"Error."<<endl;
		 }
		 	void sub(){//subtraction
 			if(a>0 && b>0)//condition
 			Simple::sub();//calling function from parent class
 			else
 			cout<<"Error."<<endl;
		 }
		 	void mul(){//multiplication
 			if(a>0 && b>0)//condition
 			Simple::mul();//calling function from parent class
 			else
 			cout<<"Error."<<endl;
		 }
		 	void div(){//division
 			if(a>0 && b>0)//condition
 			Simple::div();//calling function from parent class
 			else
 			cout<<"Error."<<endl;
		 }
 };
 int main(){//function where execution starts
 	Complex mv;//object creation and memory allocation
 	//calling member functions
 	mv.in();
 	mv.add();
 	mv.sub();
 	mv.mul();
 	mv.div();
 		return 0;//function where control returns
 }