#include <iostream>
using namespace std;
class area{
	private:
		float length,width,radius,area1;
	public:
	void circ(){
		cout<<"Enter radius of circle: ";
		cin>>radius;
		area1=2*3.14*radius;
		cout<<"Area is: "<<area1<<endl;
	}
	void sq(){
		cout<<"Enter side: ";
		cin>>length;
		area1=2*length;
		cout<<"Area is: "<<area1<<endl;
	}
	void rect(){
		cout<<"Enter length and width: ";
		cin>>length>>width;
		area1=length*width;
		cout<<"Area is: "<<area1<<endl;
	}
};
int main(){
	area a;
	int x;
	cout<<"Enter number for shape:\n1. Circle\n2. Square\n3. Rectangle\n";
			cin>>x;
			if(x==1)
			a.circ();
			else if(x==2)
			a.sq();
			else if(x==3)
			a.rect();
			else cout<<"Invalid choice."<<endl;
}