#include <iostream>//preprocessor directives
using namespace std;//standard library
class Person{//parent class
	private://Access specifier
	//Data members
		int id;
		char name[20];
		char address[100];
	public://Access specifier
	Person(){//Constructor
		name[0]='\0';
		address[100]='\0';
		id=0;
	}	
	//member functions
	void set(){//for input
		cout<<"Enter name: ";
		cin.getline(name,20);
		
		cout<<"Enter address: ";
		cin.getline(address,100);
		cout<<"Enter id: ";
		cin>>id;
	}
	void get(){//for output
		cout<<"Name is: "<<name<<endl;
			cout<<"ID is: "<<id<<endl;
			cout<<"Address is: "<<address<<endl;
	}
};
class Student: public Person{//Child class as well as parent one
	private://Access specifier
	//datamembers
		int rollno, marks;
	public://Access specifier
	//member functions
		void set(){//for input
		Person::set();//calling member function of parent class
			cout<<"Enter roll number: ";
			cin>>rollno;
			cout<<"Enter marks: ";
			cin>>marks;
		}
		void get(){//for output
			Person::get();//calling member function of parent class
			cout<<"Roll number is: "<<rollno<<endl;
			cout<<"Marks are: "<<marks<<endl;
		}
};
class Scholarship: public Student{//Child class
	private://Access specifier
	//datamembers
	int amount;
	char scholarshipname[20];
	public://Access specifier
	//member functions
		void set(){//for input
			cout<<"Enter scholarship name: ";
			cin.getline(scholarshipname,20);
			Student::set();//calling member function of parent class
		
			cout<<"Enter amount: ";
			cin>>amount;
		}
		void get(){//for output
			Student::get();//calling member function of parent class
			cout<<"Scholarship is "<<scholarshipname<<" with amount "<<amount<<endl;
		}
};
int main(){//function where execution starts
	Scholarship mavi;//object creation and memory allocation
	mavi.set();//calling member function
	mavi.get();//calling member function
		return 0;//function where control returns
}