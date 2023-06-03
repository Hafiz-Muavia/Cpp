#include <iostream>//preprocessor directive
using namespace std;//standard library
class Time{//class definition
	private://access specifier
		int hours, mins, seconds;//data members
	public://access specifier
		Time(){//constructor
			hours=mins=seconds=0;//initialization
		}
		Time(int h, int m, int s){//parameterized constructor
		//initialization
			hours=h;
			mins=m;
			seconds=s;
		}
		void show(){//member function to show
			cout<<"Time is: "<<hours<<":"<<mins<<":"<<seconds<<endl;
		}
		void operator ++(){//operator overload for increment
			if(mins==59){
				hours++;
				mins=0;
			}
			else mins++;
		}
		void operator --(){//operator overload for decrement
			if(mins==0){
				hours--;
				mins=59;
			}
			else mins--;
		}
};//class ends
int main(){//function where execution starts
	Time abc(1,59,54);//object creation and memory allocation
	//calling member function before overloading
	abc.show();
	++abc;;//operator overload for increment
	//calling member function after overloading
	abc.show();
	--abc;//operator overload for decrement
	//calling member function after overloading
	abc.show();
	return 0;//control returns
}