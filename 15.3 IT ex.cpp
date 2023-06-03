#include <iostream>//preprocessor directive
using namespace std;//standard library
class Teacher{//Parent class
	private://access specifier
	//data members
	    char name[20],address[50];
	    int age;
	public://access specifier
	//member functions
		void in(){//for input
			cout<<"Enter name of the teacher: ";
			cin.getline(name,20);
			cout<<"Enter address: ";
			cin.getline(address,50);
			cout<<"Enter age: ";
			cin>>age;
		}
		void out(){//for output
			cout<<"Name of the teacher is: "<<name<<endl;
			cout<<"Address is: "<<address<<endl;
			cout<<"Age is: "<<age<<endl;
		}
};
class Writer{//Parent class
	private://access specifier
	//data members
		char wname[20],waddress[50];
		int noB;
	public://access specifier
	//member functions
		void in(){//for input
			cout<<"Enter name of writer: ";
			cin.getline(wname,20);
			cout<<"Enter address: ";
			cin.getline(waddress,50);
			cout<<"Enter number of books writer wrote: ";
			cin>>noB;
		}
		void out(){//for output
			cout<<"Writer is: "<<wname<<endl;
			cout<<"Where address of writer is: "<<waddress<<endl;
			cout<<"No. of books written by writer are: "<<noB<<endl;
		}
};
class Scholar: public Teacher, public Writer{//child class
	public://access specifier
	//member functions
		void in(){//for input
		//calling parent's member functions
			Teacher::in();
			Writer::in();
		}
		void out(){//for output
		//calling parent's member functions
			Teacher::out();
			Writer::out();
		}
};
int main(){//function where execution starts
	Scholar mv;//object creationn and memory allopcation
		//calling member functions
	mv.in();
	mv.out();
	return 0;//function where control returns
}