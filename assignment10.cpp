#include <iostream>//preprocessor directive
using namespace std;//standard library
class report{//definition of class
private://access specifiers
//local declarations of data members
	int *admno;
	char name[20];
	float marks[5];
	float average=0;
	void getavg(){//function for average
		average/=5.0;
	}
	public://access specifier
	report(){//constructor
	admno=new int;//heap memory allocation
	}
	~report(){
		delete admno;//deleting from heap
	}
	//member functions
		void readinfo(){//for input
			cout<<"Enter admission no: "; cin>>*admno;
			cout<<"Enter name: "; cin>>name;
			for(int i=0;i<5;i++){//loop for input marks
				cout<<"Enter marks for subject "<<i+1<<": ";
				cin>>marks[i];
			    average+=marks[i];//sum of marks
			}
				getavg();//invoking average function
		}
		void displayinfo(){//for output
			cout<<"Admission number is: "<<*admno<<endl;
			cout<<"Name is: "<<name<<endl;
			for(int j=0;j<5;j++)//loop for output marks
			cout<<"Subject "<<j+1<<" has marks "<<marks[j]<<endl;
			cout<<"Average of marks is: "<<average<<endl;
		}
};
int main(){//execution starts
	report mahi;//object creation
	//accessing member functions
	mahi.readinfo();
	mahi.displayinfo();
	return 0;//control return
}//destructor called