#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char ch;
	ofstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ chars.txt");
	cout<<"Enter 5 characters: ";
	for(int i=0;i<5;i++){
		cin>>ch;
		obj<<ch;
	}
	obj.close();
	return 0;
}