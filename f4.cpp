#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char ch[100];
	ifstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ fh2.txt");
	while(! obj.eof()){
		obj.getline(ch,100);
	cout<<ch<<endl;
	}
	obj.close();
	return 0;
}