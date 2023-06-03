#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int i, j;
	cin>>i>>j;
	ofstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ Myfirst.txt");
	obj<<i<<endl<<j;
	obj.close();
	return 0;
}