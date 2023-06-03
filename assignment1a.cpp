#include <iostream> //preprocessor directive
using namespace std; //Standard library
class Test //Class definition
{
    private: //private access specifier
        int x; //data member 
    public: //public access specifier
    Test(){ //Construcor
    	cout<<"Comstructor is called."<<endl; //console output
    	x=0; //Initialization
	} //Constructor ends
	~Test(){ //Destructor
		cout<<"Destructor is called."; //Console output
	}
        void setX() //setter function
        { 
        cin>>x; //Accessing private data member
		}
		void getX() //Getter function
		{
		cout<<x; //displaying private data member
		}
	
        };//Class ends

int main(){//Function where execution starts
	Test obj;//Object of Class
	//Object created, Occupy memory, Constructor called
	//public member functions called
	obj.setX();
	obj.getX();
	return 0;
} //Destructor will be called implicitly