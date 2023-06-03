#include <iostream>
using namespace std;
int main(){
	char x[100];
	cout<<"Enter a string: ";
	cin>>x;
	int y=strlen(x);
	
	char z[y];
	int j=y-1;
	for(int i=0;i<y;i++){
		z[i]=x[j];
		j--;
	}
	cout<<x<<endl<<z<<endl;
	if(strcmp(x,z)==0)
	cout<<"Palibdrome.";
	else cout<<"no";
}