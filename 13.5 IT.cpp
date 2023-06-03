#include <iostream>//preprocessor directive
using namespace std;//Standard Library
class result{//class definition
	private://access specifier
	//Local declaration of data members
		int rollno;
		char name[10];
		int marks[3];
		public://access specifier
		int *sum;
		
		result(){//Constructor
			
			sum=new int;//heap memory allocation
		}
			~result(){//destructor
				delete sum;//deletion from heap
			}
			//member functions
			void input(){//for input
				cout<<"Enter roll: ";
				cin>>rollno;
				cout<<"Enter Name: ";
				cin>>name;
				for(int i=0;i<3;i++){//loop for taking input
					cout<<"Enter subject "<<i+1<<" marks: ";
					cin>>marks[i]; 
				}
			}
			void show(){//for displaying data
				cout<<"Roll is: "<<rollno<<endl;
				cout<<"Name is: "<<name<<endl;
				for(int i=0;i<3;i++){//loop for displaying marks
					cout<<"Subject "<<i+1<<" marks are: "<<marks[i]<<endl; 
			}
		}
		int total(){//function to return sum of marks
			*sum=0;
			for(int i=0;i<3;i++)//loop to add marks
			*sum+=marks[i];
			return *sum;
					}
				float avg(){//for returning average
					return *sum/3.0;
				}	
};
int main(){//execution starts
	result mavi;//object creation with memory allocation
	//calling member functions
	mavi.input();
	mavi.show();
	//Displaying total marks and average
	cout<<"Total marks are: "<<mavi.total()<<endl;
	cout<<"Average is: "<<mavi.avg();
}//destructor called