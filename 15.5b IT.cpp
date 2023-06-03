#include <iostream>//preprocessor directives
using namespace std;//standard library
class Computer{//parent class
	private://Access specifier
	//Data members
	int wordsize, memorysize, storagesize, speed;
	public://Access specifier
	Computer(){//Constructor
		wordsize=memorysize=storagesize=speed=0;
	}	
	Computer(int a, int b, int c, int d){//Parameterized constructor
	//Initialization
		wordsize=a;
		memorysize=b;
		storagesize=c;
		speed=d;
	}
	void get(){//member function for output
		cout<<"Word size is: "<<wordsize<<endl;
		cout<<"Memory size is: "<<memorysize<<endl;
		cout<<"Storage size is: "<<storagesize<<endl;
		cout<<"Speed is: "<<speed<<endl;
	}
};
class Laptop: public Computer{//Child class
	private://Access specifier
	//data members
		int length, weight, height, width;
		public://Access specifier
			Laptop(){//Constructor
				length=width=height=weight=0;
			}
			Laptop(int a, int b, int c, int d, int e, int f, int g, int h):Computer( e, f , g, h){//Parameterized constructor
			//Initialization
				length=a;
				width=b;
				height=c;
				weight=d;
			} 
			void get(){//member function for output
				Computer::get();//calling function from parent class
				cout<<"Length is: "<<length<<endl;
				cout<<"Width is: "<<width<<endl;
				cout<<"Height is: "<<height<<endl;
				cout<<"Weight is: "<<weight<<endl;
			}
};

int main(){//function where execution starts
	Laptop mv(5,6,7,8,9,0,33,44);//object creation and memory allocation
	mv.get();//calling member function
	Computer mv2(1,2,3,4);//object creation and memory allocation
	mv2.get();//calling member function
		return 0;//function where control returns
}