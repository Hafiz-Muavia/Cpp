#include <iostream>
using namespace std;
template <class X>
class Index{
	private:
		X a[5];
	public:
	void	in(){
			cout<<"Enter the values:";
			for(int i=0;i<5;i++)
			cin>>a[i];
	}
	void	show(){
			int x;
			cout<<"Enter index: ";
			cin>>x;
			cout<<"Value in specific index is: "<<a[x];
		}
};
int main(){
	Index <int> mv;
	mv.in();
	mv.show();
	Index <string> sm;
	sm.in();
	sm.show();
}