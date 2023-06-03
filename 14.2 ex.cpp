#include <iostream>//preprocessor directive
using namespace std;//standard library
class Bacc{//class definition
	private://access specifier
	//data members
		char name[50];
		int accno;
		char acctyp[15];
		float blnc;
	public://access specifier
		Bacc(){//constructor
		//initialization
			name[0]=acctyp[0]='\0';
			accno=0;
			blnc=0;
			//taking input values
			cout<<"Enter name: ";
			cin.getline(name,50);
			cout<<"Enter type: ";
			gets(acctyp);
			cout<<"Enter account number: ";
			cin>>accno;
			cout<<"Enter balance: ";
			cin>>blnc;
		}
		//member functions
		void deposit(float amnt){//for deposit
			blnc+=amnt;
			cout<<"Balance after deposit is: "<<blnc<<endl;
		}
		void withdraw(float amn){//for withdraw
			if(blnc<amn){
				cout<<"Not enough amount in your account."<<endl;
			}
			else{
				cout<<"Your account balance is: "<<blnc<<endl;
			blnc-=amn;
		    cout<<"Balance after withdraw is: "<<blnc<<endl;
			}
			
		}
		void display(){//member function to show
			cout<<"Your name is "<<name<<" and balance is "<<blnc<<endl;
			cout<<"Account number is: "<<accno<<endl;
		}
		void operator +(Bacc p){//operator overload
			blnc=blnc+p.blnc;
		}
};//class ends
int main(){//function where execution starts
	Bacc a,b;//object creation and memory allocation
	//calling member function before overloading
	a.display();
	b.display();
	a+b;//operator overload
	//calling member function after overloading
	a.display();
	b.display();
	return 0;//control returns
}