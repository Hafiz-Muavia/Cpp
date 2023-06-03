#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string str;
	ofstream obj1("C:/Users/Hafiz Muavia/Desktop/File Handling/ string.txt");
	for(int i=0;i<5;i++){
		cout<<"Enter a string: ";
		getline(cin,str);
		obj1<<str<<endl;
	}
	obj1.close();
	ifstream obj2("C:/Users/Hafiz Muavia/Desktop/File Handling/ string.txt");
	while(!obj2.eof()){
		getline(obj2,str);
		cout<<str<<endl;
	}
	obj2.close();
	return 0;
}