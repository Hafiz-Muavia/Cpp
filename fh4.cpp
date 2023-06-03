#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char ch[100];
	ifstream obj1("C:/Users/Hafiz Muavia/Desktop/File Handling/ fh2.txt");
	ofstream obj2("C:/Users/Hafiz Muavia/Desktop/File Handling/ copied2.txt");
	if(obj1&&obj2){
		while(obj1.getline(ch,100)){
		obj2<<ch<<endl;
	}
	}
	
	obj1.close();
	obj2.close();
}