#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char city[50];
	ofstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ city.txt");
	if(!obj){
		cout<<"Error";
		exit(1);
	}
	cout<<"Enter 5 cities: ";
	for(int i=0;i<5;i++){
		cin>>city;
		obj<<city<<endl;
	}
	obj.close();
	return 0;
}