#include <iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long m=0,c=0,a=0;
	long long b=0,d=0;
	while(n!=0){
		c=n%2;
		a=a*10+c;
		n=n/2;
		m++;
	}
	for(int i=1;i<=m;i++){
		
		b=a%10;
		d=d*10+b;
		a=a/10;
	}
	cout<<d;
}