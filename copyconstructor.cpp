#include <iostream>
#include <cstring>
using namespace std;
class test{
	private:
		int x;
		string mavi;
	public:
		test(int a, string b){
			x=a;
			mavi=b;
			
		}
		test(const test &p){
		 
			x=p.x;
			mavi=p.mavi;
		}
		void get(){
		cout<<x<<endl<<mavi<<endl;
}
};
int main(){
	test obj1(39,"Sohaib");
	test obj2(10, "Hamza");
	test obj3=obj2;
	test obj4=obj1;


	obj1.get();
	obj2.get();
	obj3.get();
	obj4.get();
}