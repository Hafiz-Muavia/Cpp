#include <iostream>//preprocessor directive
using namespace std;//standard library
class Employee{//Parent class
	private://access specifier
		int empid,scale;//data members
	public://access specifier
	//member functions
		void in(){//for input
			cout<<"Enter id: ";
			cin>>empid;
			cout<<"Enter scale: ";
			cin>>scale;
		}
		void out(){//for output
			cout<<"Id is: "<<empid<<endl;
			cout<<"Scale is: "<<scale<<endl;
		}
};
class Manager: public Employee{//child class
	private://access specifier
	//data members
		int mgrid;
		char dept[20];
	public://access specifier
	//member functions
		void in(){//for input
			cout<<"Enter dept: ";
			cin.getline(dept,20);
			Employee::in();//calling parent's member function
		    cout<<"Enter Manager id: ";
			cin>>mgrid;
		}
		void out(){//for output
			Employee::out();//calling parent's member function
			cout<<"Department is: "<<dept<<endl;
			cout<<"Manager id is: "<<mgrid<<endl;
		}
		
};
int main(){//function where execution starts
	Manager Mavi;//object creationn and memory allopcation
	//calling member functions
	Mavi.in();
	Mavi.out();
	return 0;//function where control returns
}