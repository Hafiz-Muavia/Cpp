#include <Iostream>
using namespace std;
template <class X>
X min1(X a[], int b){
	X min;
	min=a[0];
	for(int i=0;i<b; i++){
		if (a[i]<min)
		min=a[i];
	}
	return min;
	
}
int main(){
	int min, x[5]={1,2,3,4,5};
	min=min1(x,5);
	cout<<"Minimun is: "<<min<<endl;
	float min2;
	float y[3]={2.5,2.1,9.1};
	min2=min1(y,3);
	cout<<"Minimun is: "<<min2<<endl;
	char min3, z[7]={'w','d','f','m','s','t','o'};
	min3=min1(z,7);
	cout<<"Minimum is: "<<min3<<endl;
	}
