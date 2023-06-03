#include <iostream> //preprocessor directive
using namespace std;//standard library
class Array{//class definition
	private: //access specifier
	    int arr[5];//data member
	public: //access specifier
	    Array(){//constructor
	    	for(int i=0;i<5;i++)
	          	arr[i]=-1;//initialization
		}
		void in(){//member function to input values
			cout<<"Enter values: ";
			for(int i=0;i<5;i++)
	          	cin>>arr[i];
		}
		void out(){//member function to show
			cout<<"Values are: ";
			for(int i=0;i<5;i++)
	          	cout<<arr[i]<<endl;
		}
		int operator ==(Array p){//operator overload
			int loc=-1;
			for(int i=0;i<5;i++){
				if(arr[i]!=p.arr[i])
				  loc=100;
			}
			if(loc==-1)
			    return 1;
			else 
			    return 0;	
			}
};//class ends
int main(){//function where execution starts
	Array ab, ba;//object creation and memory allocation
	//calling member function for input
	ab.in();
	ba.in();
	if(ab==ba)//operator overload for comparison
	    cout<<"Same values in both arrays."<<endl;
	else
	    cout<<"Different values in both arrays."<<endl;
    return 0;//control returns
}