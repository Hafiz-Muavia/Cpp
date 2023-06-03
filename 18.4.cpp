#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char city[50];
	ifstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ city.txt");
	if(!obj){
		cout<<"Error";
		exit(1);
	}
	cout<<"The 5 cities are: ";
	
		
		while(!obj.eof()){
			
			obj>>city;
			cout<<city<<endl;
		}
	
	obj.close();
	return 0;
}