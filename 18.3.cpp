#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int n;;
	char ch;
	double d;
	ifstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ test.txt");
	if(!obj){
		cout<<"Error";
		exit(1);
	}
	obj>>n>>ch>>d;
	cout<<n<<ch<<d;
	obj.close();
	return 0;
}