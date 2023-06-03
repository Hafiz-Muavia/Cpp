#include <iostream>//preprocessor directive
using namespace std;//standard library
class air{//class definition
private:
	//local declarations of data members
	int *flight;
	string destination;
	float distance;
	float fuel;
	void calfuel(){
		if(distance<=1000)
		fuel=500;
		else if(distance>1000 && distance<=2000)
		fuel=1100;
		else if(distance>2000)
		fuel=2200;
	}
	public:
		air(){
			//constructor
			flight=new int;//allocation in heap
		}
		~air(){
			//destructor
			delete flight;//deletion from heap
		}
		void feedinfo(){
				//function for entering value
			cout<<"Enter flight: ";
			cin>>*flight;
			cout<<"Enter Destination: ";
			cin>>destination;
			cout<<"Enter distance: ";
			cin>>distance;
			calfuel();
		}
			void showinfo(){//for displaying data
			cout<<"Flight is "<<*flight<<endl;
			cout<<"Destination is "<<destination<<endl;
			cout<<"Distance is "<<distance<<endl;
			cout<<"Fuel is "<<fuel<<endl;
		}
};
int main(){//execution starts
air hui;//object created
//accessing member functions from public
hui.feedinfo();
hui.showinfo();
return 0;//control returns
}//destructor called