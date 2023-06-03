#include <iostream>
using namespace std;
int main(){
	int w=1,s=0;
	char a[100];
	cin.getline(a,100);
	
	char *ptr;
	ptr=a;
	while(*ptr!='\0'){
		if(*ptr==' ')
		w++;
		else s++;
		
		*ptr++;
	}
	cout<<"Words are: "<<w<<endl;
	cout<<"Spaces are: "<<w-1<<endl;
	cout<<"Letter are: "<<s;
}