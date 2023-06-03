#include <iostream>
using namespace std;
class Result{
	private:
		int marks[3];
		int sum=0;
		float averg=0;
	public:
		void in(){
			for(int i=0;i<3;i++){
				cout<<"Enter marks for "<<i+1<<" : ";
				cin>>marks[i];
			}	
		}
		void avg(){
			for(int i=0;i<3;i++)
			sum+=marks[i];
			averg=sum/3.0;
			cout<<"Average of marks is: "<<averg;
		}
};
class Student: public Result{
	private:
		int roll;
		char name[20];
		Result obj;
	public:
		void in(){
			cout<<"Enter name: ";
			cin.getline(name,20);
			cout<<"Enter roll number: ";
			cin>>roll;
			obj.Result::in();
		}
		void show(){
			cout<<"Name: "<<name<<endl<<"Roll no. : "<<roll<<endl;
			obj.avg();
		}
};
int main(){

	Student mv;
	
	mv.in();
	mv.show();
}