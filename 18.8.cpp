#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char ch;
	int i=0,j=0;
	ifstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ fh2.txt");
	obj.get(ch);
	while(!obj.eof()){
		j++;
		if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='o' || ch=='O' || ch=='i' || ch=='I' || ch== 'U' || ch=='u')
		i++;
		obj.get(ch);
	}
	cout<<"Number of characters are: "<<j<<endl;
	cout<<"Number of vowels are: "<<i<<endl;
	obj.close();
	return 0;
}