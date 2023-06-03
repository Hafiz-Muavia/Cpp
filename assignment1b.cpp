#include <iostream> //preprocessor directive
using namespace std; //Standard library
class Student //Class definition
{
    private: //private access specifier
        //data members
        int *roll_no;
        char name[20];
        int m1,m2,m3;
        int total,average;
        
    public: //public access specifier
    Student(){ //Construcor
    	cout<<"Comstructor is called."<<endl; //console output
    	 //Initialization
    	 roll_no=new int;//integer from heap
    	 m1=0;
    	 m2=0;
    	 m3=0;
    	 total=0;
    	 average=0;
	} //Constructor ends
	~Student(){ //Destructor
		cout<<"Destructor is called."; //Console output
		delete roll_no;//deletion from heap
	}
        void setdata() //setter function
        { 
         //Accessing private data members
         cout<<"Enter student name::"; cin>>name;
         cout<<"Enter roll no of the student::";cin>>*roll_no;
         cout<<"Enter marks of first subject::"; cin>>m1;
         cout<<"Enter marks of  second subject::"; cin>>m2;
         cout<<"Enter marks of third subject::"; cin>>m3;

		}
		void getavg() //Getter function
		{
		cout<<"Student name: ";
		cout<<name<<endl;
        cout<<"roll no::"<<*roll_no<<endl;                                                           
        cout<<"marks of first subject::  "<< m1 <<endl;
        cout<<"marks of second subject::  "<<  m2 <<endl;
        cout<<"marks of third subject::   "<<  m3 <<endl;
 //displaying private data members
        total=m1+m2+m3;//total marks
        average=total/3;//average
        cout<<"Average marks of "<<name<<" is: "<<average;//displaying average
		}
	
        };//Class ends

int main(){//Function where execution starts
	Student S1,S2,S3;//Object of Class
	//Object created, Occupy memory, Constructor called
	//public member functions called
	S1.setdata();
	S1.getavg();
	S2.setdata();
	S2.getavg();
	S3.setdata();
	S3.getavg();
	return 0;
} //Destructor will be called implicitly