#include <iostream>
using namespace std;
template <class X>
X max1(X a, X b){
	if(a>b)
	return a;
	else return b;
}
int main(){
	int x;
	x=max1(6,9);
	cout<<x<<endl;
	float y=max1(5.234,4.99);
	cout<<y<<endl;
}