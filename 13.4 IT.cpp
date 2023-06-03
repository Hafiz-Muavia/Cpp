#include <iostream>//preprocessor directrive
using namespace std;//Standard Library
class Book{//class definition
	private://access specifier
	//Local declaration of data members
		int *BookID, pages,price;
		public:
			Book(){//Constructor called
				BookID=new int;//Heap memory allocation
			}
			~Book(){//Destructor
				delete BookID;//deletion from heap
			}
			void get(){//member function for taking input
				cout<<"Enter Bookid, pages, price: ";
				cin>>*BookID>>pages>>price;
			}
			void show(){//member function for displaying values
				cout<<"BOOk id is: "<<*BookID<<endl<<"Pages is: "<<pages<<endl<<"Price is: "<<price<<endl;
			}
			void set(int a, int b, int c){//member function for passing parameters
				*BookID=a;
				pages=b;
				price=c;
			}
			int getPrice(){//member function for returning price
				return price;
			}
};//class ends
int main(){//function where executiobn starts
	Book mv,hui;//object creation
	//calli ng member functions 
	mv.get();
	mv.show();
	int a,b,c;//Local Declarations
	cout<<"Enter values: ";
	cin>>a>>b>>c;
	hui.set(a,b,c);//Passing parameters
	if(mv.getPrice() > hui.getPrice())//Comparing prices of two books
	mv.show();
	else hui.show();
	return 0;//control returns
}//Destructor called