#include <iostream>
using namespace std;
class Base{
	public:
		void p(){
			cout<<"Base";
		}
};
class Base2: public Base{
	public:
	void 	p(){
			cout<<"Base2";
		}
};
int main(){
	Base2 st2;
	Base *ptr = &st2   ;
	

		
	ptr->p();
	return 0;
}