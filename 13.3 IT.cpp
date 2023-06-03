#include <iostream>//preprocessor directive
using namespace std;//Standard Library
class circle{//class definition
	private://access specifier
		float *radius;//data member
		public://access specifier
		circle(){//constructor
			radius=new float;//heap memory allocation
		}
		~circle(){//destructor
			delete radius;//deletion from heap
		}
		//member functions
			void get_radius(float r){//function for radius
				*radius=r;
			}
			void area(){//function for area
				cout<<"Radius is: "<<*radius<<endl;
				cout<<"Area is: "<<*radius**radius<<endl;
			}
			void circum(){//function for circumference
				float circ=2*3.14**radius;//formula of circumference
				cout<<"Circumference of circle is: "<<circ;
			}
};
int main(){//function where execution starts
	circle mv;//object created with allocation of memory and constructor calling implicitly
	float x;//Local declaration
	cout<<"Enter radius: ";//console output
	cin>>x;//console input
	mv.get_radius(x);//calling function
	mv.area();//calling function
	mv.circum();//calling function
	return 0;//control moves
}//destructor called