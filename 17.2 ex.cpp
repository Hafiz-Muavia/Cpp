#include <iostream>
using namespace std;
template <class X, class Y, class Z>
void reverse(X a, Y b, Z c){
	cout<<c<<endl;
	cout<<b<<endl;
	cout<<a<<endl;
}
int main(){
	reverse ( 2, 3.34, "hello");
}