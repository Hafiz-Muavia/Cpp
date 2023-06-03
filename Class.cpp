#include <iostream>
using namespace std;
class mavi{
	private:
		int x;
	public:
		void set(){
			cout<<"Enter a number: ";
			cin>>x;
		}
		void get(){
			cout<<"Value is: "<<x;
		}
};
int main() {
	mavi shb;
	shb.set();
	shb.get();
}