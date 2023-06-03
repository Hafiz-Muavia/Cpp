#include <iostream>//preprocessor directive
using namespace std;//standard library
class Book{//Parent class
	private://access specifier
	//data members
		int bookid,price;
		char bname[20];
	public://access specifier
	//member functions
		void in(){//for input
			cout<<"Enter name of the book: ";
			cin.getline(bname,20);
			cout<<"Book id? ";
			cin>>bookid;
			cout<<"Enter price: ";
			cin>>price;
		}
		void out(){//for output
			cout<<"Book name is: "<<bname<<endl;
			cout<<"Id is"<<bookid<<endl;
			cout<<"Its price is: "<<price<<endl;
		}
};
class Writer{//Parent class
	private://access specifier
	//data members
		char wname[20],waddress[50];
		int noB;
		Book b[5];
	public://access specifier
	//member functions
		void in(){//for input
			cout<<"Enter name of writer: ";
			cin.getline(wname,20);
			cout<<"Enter address: ";
			cin.getline(waddress,50);
			cout<<"Enter number of books writer wrote: ";
			cin>>noB;
			cout<<"Enter details of 5 books."<<endl;
			for(int i=0;i<5;i++){
				b[i].in();//calling parent's member function
			}
		}
		void out(){//for output
			cout<<"Writer is: "<<wname<<endl;
			cout<<"Where address of writer is: "<<waddress<<endl;
			cout<<"No. of books written by writer are: "<<noB<<endl;
				cout<<"Details of 5 books."<<endl;
			for(int i=0;i<5;i++){
				b[i].out();//calling parent's member function
			}
		}
};
int main(){//function where execution starts
	Writer mv;//object creationn and memory allopcation
		//calling member functions
	mv.in();
	mv.out();
	return 0;//function where control returns
}