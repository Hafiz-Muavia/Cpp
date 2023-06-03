#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int n=10;
	char ch='a';
	double d=3.76;
	ofstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ test.txt");
	if(!obj){
		cout<<"Error";
		exit(1);
	}
	obj<<n<<ch<<d;
	obj.close();
	return 0;
}