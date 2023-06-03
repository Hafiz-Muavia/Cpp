#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char ch;
	ifstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ chars.txt");
	cout<<"The 5 characters are: ";
	obj>>ch;
	while(!obj.eof()){
		
		cout<<ch;
		obj>>ch;
	}
	obj.close();
	return 0;
}