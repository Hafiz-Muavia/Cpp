#include <iostream>//preprocessor directive
using namespace std;//standard library
class batsman{//defining class
	private: //access specifier
	//local declarations
	 int *bcode;
	 char bname[20];
	 int innings, notout,runs;
	 float batavg;
	 void calcavg(){//member function for batavg value
	 	batavg=runs/(innings-notout);
	 }
	 public:
	 	batsman()//constructor
	 	{
	 		bcode=new int;//heap memory allocation
		 }
		 ~batsman()//destructor
		 {
		 	delete bcode;//deletion from heap
		 }
	 	void readdata(){//member function for taking input
	 		cout<<"Enter bcode: ";
	 		cin>>*bcode;
	 		cout<<"Enter name: ";
	 		cin>>bname;
	 		cout<<"Enter innings: ";
	 		cin>>innings;
	 		cout<<"Enter runs: ";
	 		cin>>runs;
	 		cout<<"Enter notout: ";
	 		cin>>notout;
	 		calcavg();//calling function in private access specifier
		 }
		 void displaydata(){//for displaying data
		 	cout<<"Bcode is: "<<*bcode<<endl<<"Name is: "<<bname<<endl<<"Innings are: "<<innings<<"\nNotouts are: "<<notout<<"\nRuns are: "<<runs<<"\nbatavg is: "<<batavg;
		 }
	 
};
int main(){//execution starts
	batsman mavi;//object creation
	mavi.readdata();//member function
	mavi.displaydata();//member function
	return 0;//control returns
}