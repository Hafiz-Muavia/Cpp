#include <iostream>//preprocesor directive
using namespace std;//standard library
class student{//class definition
	private://access specifier
	//local declarations of data members
		int admno;
		char sname[20];
		float eng,math,science,total;
		float ctotal(){//member function for total marks
			return eng+math+science;
		}
		int *x;
		//member functions
		void setx(){//for input x
			cout<<"Enter value for x: ";
			cin>>*x;
		}
		void getx(){//to display x
			cout<<"Value of x is: "<<*x;
		}
		public://access specifier
			student(){//constructor
			x=new int;//heap memory allocation	
			}
			~student(){//destructor
				delete x;//deletion from heap
			}
			//member functions
			void takedata(){//for input all data members
				cout<<"Enter admission number: ";
				cin>>admno;
				cout<<"Enter name: ";
				cin>>sname;
				cout<<"Enter marks for all: ";
				cin>>eng>>math>>science;
				total=ctotal();//calling function to return total
				
			}
			void showdata(){//to display data
				cout<<"Name is: "<<sname<<endl;
				cout<<"Admno is: "<<admno<<endl;
				cout<<"Total are: "<<total;
			}
			void mavi2(){//calling private member functions
				setx();
			
				getx();
			}
};
int main() {//function where execution starts
	student mavi;//object creation
	mavi.takedata();//calling member function
	mavi.showdata();//calling member function
	mavi.mavi2();
	return 0;//control returns

}//destructor called