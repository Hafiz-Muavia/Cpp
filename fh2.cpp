#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream obj("C:/Users/Hafiz Muavia/Desktop/File Handling/ fh2.txt");
	obj<<"I am a cutie pie."<<endl<<"Huhhhhhh I love myself huhhhh."<<endl<<"Tolu Molu r my bndriyan"<<endl<<"ummmmahhhh for them.";
	obj.close();
	return 0;
}