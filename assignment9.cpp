#include <iostream>//preprocessor directive
using namespace std;//standard library
class Book{//defining class
private://access specifier
//local declarations
	int *bookno;
	char booktitle[20];
	float price;
	float totalcost(int n){//function for total cost 
		return n*price;
	}
	public://access specifier
	Book(){//constructor
	bookno=new int;//heap memory allocation
	}
	~Book(){//destructor
		delete bookno;//deletion from heap
	}
	//member functions
		void input(){//for input
			cout<<"Enter book number: ";
			cin>>*bookno;
			cout<<"Enter title of book: ";
			cin>>booktitle;
			cout<<"Enter price of book: ";
			cin>>price;
		}
		void purchase(){//for output
			int a;
			cout<<"Enter number of copies: ";cin>>a;
			
			cout<<"Total cost will be: "<<totalcost(a);
		}
};
int main(){//execution starts
	Book euuu;//object created
	//accessing member functions from public
	euuu.input();
	euuu.purchase();
	return 0;//control returns
}//destructor called