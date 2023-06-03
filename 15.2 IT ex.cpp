#include <iostream>//preprocessor directive
using namespace std;//standard library
class LocalPhone{//Parent class
	private://access specifier
		long long phone;//data member
	public://access specifier
	//member functions
		void in(){//for input
			cout<<"Enter your phone: ";
			cin>>phone;
		}
		void out(){//for output
			cout<<"Your phone is: "<<phone<<endl;
		}
};
class NatPhone: public LocalPhone{//parent as well as child class
	private://access specifier
		int citycode;//data members
	public://access specifier
	//member functions
		void in(){//for input
			LocalPhone::in();//calling parent's member function
			cout<<"Enter City code: ";
			cin>>citycode;
		}
		void out(){//for output
			LocalPhone::out();//calling parent's member function
			cout<<"Citycode is: "<<citycode<<endl;
		}
};
class IntPhone:public NatPhone{//child class
	private://access specifier
		int countrycode;//data members
	public://access specifier
	//member functions
		void in(){//for input
			NatPhone::in();//calling parent's member function
			cout<<"Enter Country code: ";
			cin>>countrycode;				
			}
		void out(){//for output
			NatPhone::out();//calling parent's member function
			cout<<"Country Code is: "<<countrycode<<endl;
		}	
};
int main(){//function where execution starts
	IntPhone mavi;//object creationn and memory allopcation
		//calling member functions
	mavi.in();
	mavi.out();
	return 0;//function where control returns
}