#include <iostream>
using namespace std;
int main(){
	int *ptr;
	ptr= new int;
	cin>>*ptr;
	delete ptr;
	cout<<*ptr;
}