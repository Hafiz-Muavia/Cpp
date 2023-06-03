#include <iostream> //preprocessor directive
using namespace std;//standard library
const int CH=3;//credit hours=3
class result{//class definition
	private://access specifier
	//datamembers
		int m[5];//array for marks
		float gpa[5];//array for subjectwise gpa
		float GP[5],*sumGP;//array for gradepoints 
		char name[20];//array for name
		public://access specifier
		result(){//constructor
		sumGP=new float;
		}
		~result(){//destructor
		delete sumGP;//deleting from heap
		}
			void get(){//getter function
				cout<<"Enter name: ";//asking for name
				cin>>name;
				for(int i=0;i<5;i++){//loop for 5 subjects' marks
					cout<<"Enter obtained marks out of 100 for subject "<<i+1<<": ";
					cin>>m[i];
					//if else condition for individual gpa
					if(m[i]>=85)
					gpa[i]=4.0;
					else if(m[i]>=80 && m[i]<85)
					gpa[i]=3.7;
					else if(m[i]>=75 && m[i]<80)
					gpa[i]=3.3;
					else if(m[i]>=70 && m[i]<75)
					gpa[i]=3.0;
					else if(m[i]>=65 && m[i]<70)
					gpa[i]=2.7;
					else if(m[i]>=61 && m[i]<65)
					gpa[i]=2.3;
					else if(m[i]>=58 && m[i]<61)
					gpa[i]=2.0;
					else if(m[i]>=55 && m[i]<58)
					gpa[i]=1.7;
					else if(m[i]>=50 && m[i]<55)
					gpa[i]=1.0;
					else gpa[i]=0;
					GP[i]=gpa[i]*CH;//grade points calculation
					*sumGP+=GP[i];//total gradepoints
					
					
				}//loop ends
				float gpaa=*sumGP/15.0;//gpa calculation
				cout<<"GPA will be: "<<gpaa;
			}
};
int main(){//function where execution starts
cout<<"************************************************************************************************************************"<<endl;
cout<<"                                                 Result Card                                                            "<<endl;
cout<<"************************************************************************************************************************"<<endl;
	result mv;//object creation
	mv.get();//calling function from public
	return 0;
}