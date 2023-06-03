#include <iostream>
using namespace std;
class DB;
class DM{
	private:
		float mt;
		int cm;
	public:
		void in(){
			cout<<"Enter distance in meters: ";
			cin>>mt;
			cout<<"Enter distance in centimeters: ";
			cin>>cm;
		}
		void out(){
			cout<<"Distance in meters is: "<<mt<<endl;
			cout<<"Distance in centimeters is: "<<cm<<endl;
		}
		friend DM show(DM x, DB y);
};
class DB{
	private:
		float inches;
		int feet;
	public:
		void in(){
			cout<<"Enter distance in feet: ";
			cin>>feet;
			cout<<"Enter distance in inches: ";
			cin>>inches;
		}
		void out(){
			cout<<"Distance in feet is: "<<feet<<endl;
			cout<<"Distance in inches is: "<<inches<<endl;
		}
		friend DM show(DM x, DB y);
};
DM show(DM x, DB y){
	DM temp;
	temp.cm=x.cm+(y.feet*12*2.54)+(y.inches*2.54);
	temp.mt=x.mt+(temp.cm/100);
	temp.cm%=100;
	return temp;
}
int main(){
	DM x,y;
	DB z;
	x.in();
	z.in();
	y=show(x,z);
	y.out();
	return 0;
}