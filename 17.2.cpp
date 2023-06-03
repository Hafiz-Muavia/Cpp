#include <iostream>
using namespace std;
template <class X>
void Type(X a){
	cout<<a<<endl;
}
int main(){
	Type(3);
	Type(2.99);
	Type('x');
	Type("Muavia");
}