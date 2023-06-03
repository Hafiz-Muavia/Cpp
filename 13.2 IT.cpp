#include <iostream>//preprocessor directive
using namespace std;
class marks{
	private:
		int x,y,*z;
		public:
			marks()//constructor
			{
				x=0;
				y=0;
				z=new int;//heap memory allocation
				//Initialization occurs
			}//constructor ends
			~marks(){//destructor
				delete z;//deletion from heap
			}
			void in(){//function for ionput
				cout<<"Enter marks for 3 subjects: ";
				cin>>x>>y>>*z;//taking input
			}
			int sum(){//function for sum
				
				return x+y+*z;//returning sum
				
			}
			float avg(){//function for average
				
				return (x+y+*z)/3.0;//returning average
				
			}
			};
int main(){//function where execution starts
	marks boy;//object creation
	boy.in();//calling member function
	cout<<"Sum of Marks is: "<<boy.sum()<<endl;
	cout<<"Average is: "<<boy.avg();
	return 0;//control returns
}