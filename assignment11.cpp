#include <iostream>
using namespace std;
class parent{
	public:
		void fun(){
			cout<<"This is parent class."<<endl;
		}
};
class child : public parent{
	public:
		void funn(){
			cout<<"This is child class."<<endl;
		}
};
int main(){
	parent O1;
	child O2;
	O1.fun();
	O2.funn();
	O2.fun();
}