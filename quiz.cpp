#include <iostream>
using namespace std;
class Time{
	private:
		int hours, mins, seconds;
	public:
		Time(){
			hours=mins=seconds=0;
		}
		Time(int h, int m, int s){
		
			hours=h;
			mins=m;
			seconds=s;
		}
		void in(){
			cout<<"Enter hours: ";
			cin>>hours;
			cout<<"Enter minutes: ";
			cin>>mins;
			cout<<"Enter seconds: ";
			cin>>seconds;
		}
		void show(){
			cout<<"Time is: "<<hours<<":"<<mins<<":"<<seconds<<endl;
		}
		void operator ++(){
			if(mins>=59){
				hours++;
				mins-=60;
				mins++;
			}
			else mins++;
		}
		    if(seconds>=60){
			seconds-=59;
			mins++;
		}

};
int main(){
	Time abc;
	abc.in();
	
	abc.show();
	++abc;
	abc.show();
	
	return 0;
}