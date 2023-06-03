#include <iostream>
using namespace std;
class test{
	private:
		int x;
	public:
	test(){
		cout<<"Constructor."<<endl;
		cout<<x<<endl;
		x=10;
		cout<<x;
	}
};
int main(){
	test t1;
}