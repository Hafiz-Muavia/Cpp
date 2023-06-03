#include <iostream>
using namespace std;
template <class X>
class Type{
	private:
		X a[5];
	public:
		void in(){
			cout<<"Enter values: ";
			for(int i=0;i<5;i++)
		cin>>a[i];
		}
		void out(){
			cout<<"Values in array are: ";
			for(int i=0;i<5;i++)
			cout<<a[i]<<endl;
		}
};
int main(){
	Type <int> mv;
	Type <char> ms;
	Type <float> sm;
	Type <string> as;
	mv.in();
	ms.in();
	sm.in();
	as.in();
	mv.out();
	ms.out();
	sm.out();
	as.out();
	
}