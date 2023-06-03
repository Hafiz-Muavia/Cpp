#include <iostream>//preprocessor directive
using namespace std;//standard library
class Test//class definition
{
	private://access specifier
	//local declarations of data members
		int *testcode;
		string description;
		int nocandidate;
		int centerread;
		int calcntr(){//member function for centerread
			return ((nocandidate/100)+1);
		}
	public://access specifier
		Test(){//constructor
			testcode=new int;//memory allocation in heap
		}
		~Test(){//destructor
			delete testcode;//deletion from heap
		}
		void schedule(){
			//function for entering value
			cout<<"Enter value of Test code: ";
			cin>>*testcode;
			cout<<"Enter Description: ";
			cin>>description;
			cout<<"Enter number of candidates: ";
			cin>>nocandidate;
			centerread=calcntr();//calling function from private
		}
		void disptest(){//for displaying data
			cout<<"Test code is "<<*testcode<<endl;
			cout<<"Description is "<<description<<endl;
			cout<<"Number of candidates are "<<nocandidate<<endl;
			cout<<"Number of centres are "<<centerread<<endl;
		}
};
int main()//execution starts
{
	Test mv;//object creation
	//calling member functions
	mv.schedule();
	mv.disptest();
	return 0;//control returns
}

		